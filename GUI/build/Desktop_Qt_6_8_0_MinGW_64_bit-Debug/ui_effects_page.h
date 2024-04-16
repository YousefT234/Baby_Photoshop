/********************************************************************************
** Form generated from reading UI file 'effects_page.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTS_PAGE_H
#define UI_EFFECTS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Effects_page
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label;
    QPushButton *StartButtonPage2_2;
    QPushButton *ElramlyButton_2;
    QPushButton *ExitButton_2;
    QPushButton *AboutUsButtonPage2_2;
    QPushButton *BounsButton_2;
    QPushButton *BackButton_3;
    QPushButton *OurTeamButton_2;

    void setupUi(QDialog *Effects_page)
    {
        if (Effects_page->objectName().isEmpty())
            Effects_page->setObjectName("Effects_page");
        Effects_page->resize(1222, 650);
        verticalLayout = new QVBoxLayout(Effects_page);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(Effects_page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -20, 1177, 4522));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 4500));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1200, 4500));
        StartButtonPage2_2 = new QPushButton(frame);
        StartButtonPage2_2->setObjectName("StartButtonPage2_2");
        StartButtonPage2_2->setGeometry(QRect(609, 60, 70, 50));
        StartButtonPage2_2->setFlat(true);
        ElramlyButton_2 = new QPushButton(frame);
        ElramlyButton_2->setObjectName("ElramlyButton_2");
        ElramlyButton_2->setGeometry(QRect(135, 241, 131, 30));
        ElramlyButton_2->setFlat(true);
        ExitButton_2 = new QPushButton(frame);
        ExitButton_2->setObjectName("ExitButton_2");
        ExitButton_2->setGeometry(QRect(1064, 60, 61, 50));
        ExitButton_2->setFlat(true);
        AboutUsButtonPage2_2 = new QPushButton(frame);
        AboutUsButtonPage2_2->setObjectName("AboutUsButtonPage2_2");
        AboutUsButtonPage2_2->setGeometry(QRect(701, 60, 81, 50));
        AboutUsButtonPage2_2->setFlat(true);
        BounsButton_2 = new QPushButton(frame);
        BounsButton_2->setObjectName("BounsButton_2");
        BounsButton_2->setGeometry(QRect(471, 242, 91, 30));
        BounsButton_2->setFlat(true);
        BackButton_3 = new QPushButton(frame);
        BackButton_3->setObjectName("BackButton_3");
        BackButton_3->setGeometry(QRect(74, 59, 201, 61));
        BackButton_3->setFlat(true);
        OurTeamButton_2 = new QPushButton(frame);
        OurTeamButton_2->setObjectName("OurTeamButton_2");
        OurTeamButton_2->setGeometry(QRect(306, 242, 131, 30));
        OurTeamButton_2->setFlat(true);

        horizontalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Effects_page);

        QMetaObject::connectSlotsByName(Effects_page);
    } // setupUi

    void retranslateUi(QDialog *Effects_page)
    {
        Effects_page->setWindowTitle(QCoreApplication::translate("Effects_page", "Dialog", nullptr));
        label->setText(QString());
        StartButtonPage2_2->setText(QString());
        ElramlyButton_2->setText(QString());
        ExitButton_2->setText(QString());
        AboutUsButtonPage2_2->setText(QString());
        BounsButton_2->setText(QString());
        BackButton_3->setText(QString());
        OurTeamButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Effects_page: public Ui_Effects_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTS_PAGE_H
