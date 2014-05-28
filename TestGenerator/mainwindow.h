#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QRadioButton>
#include "test.h"
#include "question.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Test t;
    int iter;
    QRadioButton* tab[9];
    QByteArray geom;
    void loadQuestion(int);
    void setMarked(int questNr);
    void clear();
    QSize windowSize;
    QString hello;
private slots:
    void on_testLoad_clicked();
    void on_next_clicked();

    void on_prev_clicked();


    void on_clearTest_clicked();

    void on_getMark_clicked();

    void on_action_Otw_rz_test_triggered();

    void on_action_Otw_rz_triggered();

    void on_action_Rozpocznij_od_nowa_triggered();

    void on_action_Wyjd_bex_oceny_triggered();

private:
    Ui::MainWindow *ui;
};
/**
 *@class MainWindow
 *@brief Klasa ustawiająca elementy graficzne
*/
#endif // MAINWINDOW_H
