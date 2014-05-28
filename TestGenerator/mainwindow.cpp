#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRadioButton>
#include <QFileDialog>
#include<QMessageBox>
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   tab[0] = ui->radioButton_1;
   tab[1] = ui->radioButton_2;
   tab[2] = ui->radioButton_3;
   tab[3] = ui->radioButton_4;
   tab[4] = ui->radioButton_5;
   tab[5] = ui->radioButton_6;
   tab[6] = ui->radioButton_7;
   tab[7] = ui->radioButton_8;
   tab[8] = ui->radioButton_9;
    hello = ui->helloLabel->text();
   for (int i = 0; i < 9; ++i)
   {
       tab[i]->setVisible(false);
   }

    ui->testing->setVisible(false);
    this->adjustSize();
    windowSize = this->size();
}
/**
 *@fn MainWindow::MainWindow()
 *@brief Konstruktor klasy MainWindow
*/
MainWindow::~MainWindow()
{
    delete ui;
}
/**
 *@fn MainWindow::~MainWindow()
 *@brief Destruktor klasy MainWindow
*/
void MainWindow::on_testLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this , QObject::tr("Open File"), "",
                                                    QObject::tr("Simple Test Files (*.stf)"));
    if (fileName == NULL) return;
    t.load(fileName);
    ui->testing->setVisible(true);
    ui->reading->setVisible(false);
    ui->action_Otw_rz->setDisabled(true);
    ui->action_Rozpocznij_od_nowa->setDisabled(false);
    ui->action_Wyjd_bex_oceny->setDisabled(false);
    iter = 0;
    loadQuestion(0);

}
/**
 *@fn MainWindow::on_testLoad_clicked()()
 *@brief Uruchamia okno wyboru pliku i zeruje nowy test
*/
void MainWindow::on_next_clicked()
{
    if (iter < t.test.size() -1)
    {
        setMarked(iter);
        ++iter;
        loadQuestion(iter);
    }
    repaint();
}
/**
 *@fn MainWindow::on_next_clicked()
 *@brief Nawigacja po pytaniach do przodu
*/
void MainWindow::clear()
{
    for(int i = 0; i < 9 ;++i)
    {
        tab[i]->setCheckable(false);
        tab[i]->setCheckable(true);
    }
}
/**
 *@fn MainWindow::clear()
 *@brief Czyszczenie zaznaczenia odpowiedzi
*/
void MainWindow::loadQuestion(int n = 0)
{
    ui->question->setText(t.test[n].getQuest());

    for (int i = 0; i < 9; ++i)
    {
        if(i < t.test[n].getCount())
        {
            QString qs(t.test[n].getAns(i)  );
            tab[i]->setText(qs);
            tab[i]->setVisible(true);
        }
        else
        {
            tab[i]->setVisible(false);
        }
    }

    if (t.test[n].marked == -1)
    {
        clear();
    }
    if (t.test[n].marked > -1)
       tab[t.test[n].marked]->setChecked(true);



    ui->prev->setDisabled(false);
    ui->next->setDisabled(false);
    if (n  == 0)
    {
        ui->prev->setDisabled(true);
    }
    if (n >= t.test.size() -1)
    {
        ui->next->setDisabled(true);
    }
}
/**
 *@fn MainWindow::loadQuestion(int)
 *@brief wczytywanie pytania na ekran
 *@param n numer pytania
*/
void MainWindow::setMarked(int questNr)
{
    t.test[questNr].marked = -1;

    for (int i = 0; i < 9; ++i)
        if (tab[i]->isChecked())
        {
            t.test[questNr].marked = i;
        }
}
/**
 *@fn MainWindow::setMarked(int)
 *@brief Ustawia odpowiedź użytkownika według ui
 *@param questNr numer pytania
*/
void MainWindow::on_prev_clicked()
{
    if (iter >= 0)
    {
        setMarked(iter);
        --iter;
        loadQuestion(iter);
    }
    if (iter < t.test.size() - 1)
    {
        ui->next->setDisabled(false);
    }
    if (iter == 0)
    {
        ui->prev->setDisabled(true);
    }

    repaint();
}
/**
 *@fn MainWindow::on_prev_clicked()
 *@brief Nawigacja po pytaniach do tyłu
*/

void MainWindow::on_clearTest_clicked()
{
    clear();
    setMarked(iter);
    repaint();
}
/**
 *@fn MainWindow::on_clearTest_clicked()
 *@brief wyczyszczenie odpowiedzi na jedno pytanie
*/
void MainWindow::on_getMark_clicked()
{

    QMessageBox msgBox;
    int ret = -2;
    setMarked(iter);
    for(int i = 0; i < t.test.size(); ++i)
    {
        if (t.test[i].marked == -1)
        {
            msgBox.setText("Nie odpowiedziałeś na wszystkie pytania!");
            msgBox.setInformativeText("Brak odpowiedzi na niektóre pytania wyraźnie obniży Twoją ocenę.");
            msgBox.setModal(true);
            msgBox.setWindowTitle("Uwaga!");
            QPushButton *sureButton = msgBox.addButton(tr("Oceń mimo to"), QMessageBox::YesRole);
            QPushButton *backButton = msgBox.addButton(tr("Powrót do testu"),QMessageBox::NoRole);
            msgBox.setDefaultButton(backButton);
            ret = msgBox.exec();
            std::cout<<ret;
            if (ret == 1)
                return;
            else
                break;
        }
    }

    if (ret== -2)
        {
            msgBox.setText("Czy na pewno chcesz zakończyć test?");
            msgBox.setInformativeText("Zostanie wystawiona ocena.");
            msgBox.setModal(true);
            msgBox.setWindowTitle("Uwaga!");
            QPushButton *sureButton = msgBox.addButton(tr("Oceń"), QMessageBox::YesRole);
            QPushButton *backButton = msgBox.addButton(tr("Wróć do testu"),QMessageBox::NoRole);
            msgBox.setDefaultButton(backButton);
            int ret = msgBox.exec();
            std::cout<<ret;
            if (ret == 1)
                return;
       }
    ui->helloLabel->setText(t.countMark());
    ui->testing->setVisible(false);
    ui->reading->setVisible(true);
    this->resize(windowSize);
    ui->action_Otw_rz->setEnabled(true);
    ui->action_Rozpocznij_od_nowa->setDisabled(true);
    ui->action_Wyjd_bex_oceny->setDisabled(true);

}
/**
 *@fn MainWindow::on_getMarked_clicked()
 *@brief Zakończenie testu i uzyskanie wyniku
*/
void MainWindow::on_action_Otw_rz_test_triggered()
{

}

void MainWindow::on_action_Otw_rz_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this , QObject::tr("Open File"), "",
                                                    QObject::tr("Simple Test Files (*.stf)"));
    if (fileName == NULL) return;
    t.load(fileName);
    ui->action_Otw_rz->setDisabled(true);
    ui->action_Rozpocznij_od_nowa->setDisabled(false);
    ui->action_Wyjd_bex_oceny->setDisabled(false);
    ui->reading->setVisible(false);
    ui->testing->setVisible(true);
      iter = 0;
    loadQuestion(0);
}
/**
 *@fn MainWindow::on_action_Otw_rz_triggered()
 *@brief Otwarcie pliku z testem.
 *Uruchamia okno z możliwością wyboru pliku .stf
*/
void MainWindow::on_action_Rozpocznij_od_nowa_triggered()
{
    for (int i = 0; i < t.test.size(); ++i)
        t.test[i].marked = -1;
    iter = 0;
    loadQuestion(0);
    repaint();

}
/**
 *@fn MainWindow::on_action_Rozpocznij_od_nowa_triggered()
 *@brief Test otwarty na nowo
 *Czyści odpowiedzi na wszystkie pytania i ładuje pierwsze z nich
*/
void MainWindow::on_action_Wyjd_bex_oceny_triggered()
{
    ui->action_Otw_rz->setDisabled(false);
    ui->action_Rozpocznij_od_nowa->setDisabled(true);
    ui->action_Wyjd_bex_oceny->setDisabled(true);
    ui->testing->setVisible(false);
    ui->reading->setVisible(true);
    ui->helloLabel->setText(hello);
    this->resize(windowSize);
    this->repaint();
}
/**
 *@fn MainWindow::on_action_Wyjd_bex_oceny_triggered()
 *@brief Zamyka test bez oceniania go.
*/
