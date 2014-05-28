/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Otw_rz;
    QAction *action_Rozpocznij_od_nowa;
    QAction *action_Wyjd_bex_oceny;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *reading;
    QHBoxLayout *horizontalLayout;
    QLabel *helloLabel;
    QWidget *testing;
    QVBoxLayout *verticalLayout_2;
    QLabel *question;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_1;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_5;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_7;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_8;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButton_9;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QPushButton *prev;
    QPushButton *clearTest;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *next;
    QPushButton *getMark;
    QMenuBar *menuBar;
    QMenu *menu_Plik;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(432, 675);
        action_Otw_rz = new QAction(MainWindow);
        action_Otw_rz->setObjectName(QStringLiteral("action_Otw_rz"));
        action_Rozpocznij_od_nowa = new QAction(MainWindow);
        action_Rozpocznij_od_nowa->setObjectName(QStringLiteral("action_Rozpocznij_od_nowa"));
        action_Rozpocznij_od_nowa->setEnabled(false);
        action_Wyjd_bex_oceny = new QAction(MainWindow);
        action_Wyjd_bex_oceny->setObjectName(QStringLiteral("action_Wyjd_bex_oceny"));
        action_Wyjd_bex_oceny->setEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        reading = new QWidget(centralWidget);
        reading->setObjectName(QStringLiteral("reading"));
        horizontalLayout = new QHBoxLayout(reading);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helloLabel = new QLabel(reading);
        helloLabel->setObjectName(QStringLiteral("helloLabel"));

        horizontalLayout->addWidget(helloLabel);


        verticalLayout_5->addWidget(reading);

        testing = new QWidget(centralWidget);
        testing->setObjectName(QStringLiteral("testing"));
        verticalLayout_2 = new QVBoxLayout(testing);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        question = new QLabel(testing);
        question->setObjectName(QStringLiteral("question"));

        verticalLayout_2->addWidget(question);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_1 = new QRadioButton(testing);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));

        horizontalLayout_2->addWidget(radioButton_1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(testing);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_2 = new QRadioButton(testing);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_2 = new QLabel(testing);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_3 = new QRadioButton(testing);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_5->addWidget(radioButton_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_3 = new QLabel(testing);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_4 = new QRadioButton(testing);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_6->addWidget(radioButton_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_4 = new QLabel(testing);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        radioButton_5 = new QRadioButton(testing);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_7->addWidget(radioButton_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_5 = new QLabel(testing);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        radioButton_6 = new QRadioButton(testing);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_8->addWidget(radioButton_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        label_6 = new QLabel(testing);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        radioButton_7 = new QRadioButton(testing);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_9->addWidget(radioButton_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        label_7 = new QLabel(testing);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_8 = new QRadioButton(testing);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_10->addWidget(radioButton_8);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);

        label_8 = new QLabel(testing);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        radioButton_9 = new QRadioButton(testing);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout_11->addWidget(radioButton_9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        label_10 = new QLabel(testing);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_11->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        prev = new QPushButton(testing);
        prev->setObjectName(QStringLiteral("prev"));

        verticalLayout_3->addWidget(prev);

        clearTest = new QPushButton(testing);
        clearTest->setObjectName(QStringLiteral("clearTest"));

        verticalLayout_3->addWidget(clearTest);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(98, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        next = new QPushButton(testing);
        next->setObjectName(QStringLiteral("next"));

        verticalLayout_4->addWidget(next);

        getMark = new QPushButton(testing);
        getMark->setObjectName(QStringLiteral("getMark"));

        verticalLayout_4->addWidget(getMark);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_12);


        verticalLayout_5->addWidget(testing);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 432, 25));
        menu_Plik = new QMenu(menuBar);
        menu_Plik->setObjectName(QStringLiteral("menu_Plik"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Plik->menuAction());
        menu_Plik->addAction(action_Otw_rz);
        menu_Plik->addAction(action_Rozpocznij_od_nowa);
        menu_Plik->addAction(action_Wyjd_bex_oceny);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Otw_rz->setText(QApplication::translate("MainWindow", "&Otw\303\263rz test...", 0));
        action_Rozpocznij_od_nowa->setText(QApplication::translate("MainWindow", "&Rozpocznij od nowa", 0));
        action_Wyjd_bex_oceny->setText(QApplication::translate("MainWindow", "&Wyjd\305\272 bez oceny", 0));
        helloLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Witaj w programie </span></p><p align=\"center\"><span style=\" font-size:24pt;\">Test Generator!</span></p><p><br/><span style=\" font-size:14pt;\">Otw\303\263rz plik z pytaniami i rozpocznij test.</span></p></body></html>", 0));
        question->setText(QApplication::translate("MainWindow", "Pytanie", 0));
        radioButton_1->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label->setText(QString());
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_2->setText(QString());
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_3->setText(QString());
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_4->setText(QString());
        radioButton_5->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_5->setText(QString());
        radioButton_6->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_6->setText(QString());
        radioButton_7->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_7->setText(QString());
        radioButton_8->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_8->setText(QString());
        radioButton_9->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        label_10->setText(QString());
        prev->setText(QApplication::translate("MainWindow", "Poprzednie", 0));
        clearTest->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207", 0));
        next->setText(QApplication::translate("MainWindow", "Nast\304\231pne", 0));
        getMark->setText(QApplication::translate("MainWindow", "Zako\305\204cz test", 0));
        menu_Plik->setTitle(QApplication::translate("MainWindow", "&Plik", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
