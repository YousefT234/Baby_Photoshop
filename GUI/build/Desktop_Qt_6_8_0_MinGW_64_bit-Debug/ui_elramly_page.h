/********************************************************************************
** Form generated from reading UI file 'elramly_page.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELRAMLY_PAGE_H
#define UI_ELRAMLY_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mohamed_Elramly_Page
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label;
    QPushButton *StartButtonPage2_2;
    QPushButton *AllButton_2;
    QPushButton *ExitButton_2;
    QPushButton *AboutUsButtonPage2_2;
    QPushButton *BounsButton_2;
    QPushButton *BackButton_3;
    QPushButton *OurTeamButton_2;

    void setupUi(QDialog *Mohamed_Elramly_Page)
    {
        if (Mohamed_Elramly_Page->objectName().isEmpty())
            Mohamed_Elramly_Page->setObjectName("Mohamed_Elramly_Page");
        Mohamed_Elramly_Page->resize(1222, 650);
        scrollArea = new QScrollArea(Mohamed_Elramly_Page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(11, 11, 1200, 628));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -20, 1177, 3022));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 3000));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1200, 3000));
        StartButtonPage2_2 = new QPushButton(frame);
        StartButtonPage2_2->setObjectName("StartButtonPage2_2");
        StartButtonPage2_2->setGeometry(QRect(610, 66, 70, 50));
        StartButtonPage2_2->setFlat(true);
        AllButton_2 = new QPushButton(frame);
        AllButton_2->setObjectName("AllButton_2");
        AllButton_2->setGeometry(QRect(65, 246, 41, 31));
        AllButton_2->setFlat(true);
        ExitButton_2 = new QPushButton(frame);
        ExitButton_2->setObjectName("ExitButton_2");
        ExitButton_2->setGeometry(QRect(1065, 66, 61, 50));
        ExitButton_2->setFlat(true);
        AboutUsButtonPage2_2 = new QPushButton(frame);
        AboutUsButtonPage2_2->setObjectName("AboutUsButtonPage2_2");
        AboutUsButtonPage2_2->setGeometry(QRect(702, 66, 81, 50));
        AboutUsButtonPage2_2->setFlat(true);
        BounsButton_2 = new QPushButton(frame);
        BounsButton_2->setObjectName("BounsButton_2");
        BounsButton_2->setGeometry(QRect(472, 248, 91, 30));
        BounsButton_2->setFlat(true);
        BackButton_3 = new QPushButton(frame);
        BackButton_3->setObjectName("BackButton_3");
        BackButton_3->setGeometry(QRect(75, 65, 201, 61));
        BackButton_3->setFlat(true);
        OurTeamButton_2 = new QPushButton(frame);
        OurTeamButton_2->setObjectName("OurTeamButton_2");
        OurTeamButton_2->setGeometry(QRect(307, 248, 131, 30));
        OurTeamButton_2->setFlat(true);

        horizontalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Mohamed_Elramly_Page);

        QMetaObject::connectSlotsByName(Mohamed_Elramly_Page);
    } // setupUi

    void retranslateUi(QDialog *Mohamed_Elramly_Page)
    {
        Mohamed_Elramly_Page->setWindowTitle(QCoreApplication::translate("Mohamed_Elramly_Page", "Dialog", nullptr));
        label->setText(QString());
        StartButtonPage2_2->setText(QString());
        AllButton_2->setText(QString());
        ExitButton_2->setText(QString());
        AboutUsButtonPage2_2->setText(QString());
        BounsButton_2->setText(QString());
        BackButton_3->setText(QString());
        OurTeamButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Mohamed_Elramly_Page: public Ui_Mohamed_Elramly_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELRAMLY_PAGE_H
