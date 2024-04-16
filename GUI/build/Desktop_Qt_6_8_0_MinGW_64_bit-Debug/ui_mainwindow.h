/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Start_button22;
    QPushButton *ExitButton;
    QLabel *label_2;
    QPushButton *Effects_Button;
    QPushButton *Start_Button;
    QPushButton *AboutUs_Butoon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Start_button22 = new QPushButton(centralwidget);
        Start_button22->setObjectName("Start_button22");
        Start_button22->setEnabled(true);
        Start_button22->setGeometry(QRect(540, 477, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Papyrus")});
        font.setPointSize(19);
        Start_button22->setFont(font);
        Start_button22->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: balck\n"
"border-style: outset;\n"
"border-radius: 800px;\n"
"}\n"
""));
        Start_button22->setFlat(true);
        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setEnabled(true);
        ExitButton->setGeometry(QRect(1003, 41, 101, 31));
        ExitButton->setFont(font);
        ExitButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: black\n"
"}"));
        ExitButton->setAutoDefault(false);
        ExitButton->setFlat(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1200, 650));
        label_2->setContextMenuPolicy(Qt::PreventContextMenu);
        Effects_Button = new QPushButton(centralwidget);
        Effects_Button->setObjectName("Effects_Button");
        Effects_Button->setGeometry(QRect(505, 40, 61, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft New Tai Lue")});
        font1.setPointSize(14);
        Effects_Button->setFont(font1);
        Effects_Button->setMouseTracking(false);
        Effects_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(255, 255, 255)\n"
"}"));
        Effects_Button->setAutoDefault(false);
        Effects_Button->setFlat(true);
        Start_Button = new QPushButton(centralwidget);
        Start_Button->setObjectName("Start_Button");
        Start_Button->setGeometry(QRect(605, 40, 61, 31));
        Start_Button->setFont(font1);
        Start_Button->setMouseTracking(false);
        Start_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(255, 255, 255)\n"
"}\n"
""));
        Start_Button->setAutoDefault(false);
        Start_Button->setFlat(true);
        AboutUs_Butoon = new QPushButton(centralwidget);
        AboutUs_Butoon->setObjectName("AboutUs_Butoon");
        AboutUs_Butoon->setGeometry(QRect(698, 40, 81, 31));
        AboutUs_Butoon->setFont(font1);
        AboutUs_Butoon->setMouseTracking(false);
        AboutUs_Butoon->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(255, 255, 255)\n"
"}\n"
""));
        AboutUs_Butoon->setAutoDefault(false);
        AboutUs_Butoon->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        Start_button22->raise();
        ExitButton->raise();
        Effects_Button->raise();
        Start_Button->raise();
        AboutUs_Butoon->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Effects_Button->setDefault(false);
        Start_Button->setDefault(false);
        AboutUs_Butoon->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Start_button22->setText(QString());
        ExitButton->setText(QString());
        label_2->setText(QString());
        Effects_Button->setText(QString());
        Start_Button->setText(QString());
        AboutUs_Butoon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
