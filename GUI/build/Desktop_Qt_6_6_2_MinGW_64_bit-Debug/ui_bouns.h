/********************************************************************************
** Form generated from reading UI file 'bouns.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNS_H
#define UI_BOUNS_H

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

class Ui_Bouns
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
    QPushButton *BackButton_3;
    QPushButton *OurTeamButton_2;
    QPushButton *ElramlyButton_2;

    void setupUi(QDialog *Bouns)
    {
        if (Bouns->objectName().isEmpty())
            Bouns->setObjectName("Bouns");
        Bouns->resize(1222, 650);
        scrollArea = new QScrollArea(Bouns);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(11, 11, 1200, 628));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -36, 1177, 2122));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 2100));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1200, 2100));
        StartButtonPage2_2 = new QPushButton(frame);
        StartButtonPage2_2->setObjectName("StartButtonPage2_2");
        StartButtonPage2_2->setGeometry(QRect(611, 60, 70, 50));
        StartButtonPage2_2->setFlat(true);
        AllButton_2 = new QPushButton(frame);
        AllButton_2->setObjectName("AllButton_2");
        AllButton_2->setGeometry(QRect(66, 240, 41, 31));
        AllButton_2->setFlat(true);
        ExitButton_2 = new QPushButton(frame);
        ExitButton_2->setObjectName("ExitButton_2");
        ExitButton_2->setGeometry(QRect(1066, 60, 61, 50));
        ExitButton_2->setFlat(true);
        AboutUsButtonPage2_2 = new QPushButton(frame);
        AboutUsButtonPage2_2->setObjectName("AboutUsButtonPage2_2");
        AboutUsButtonPage2_2->setGeometry(QRect(703, 60, 81, 50));
        AboutUsButtonPage2_2->setFlat(true);
        BackButton_3 = new QPushButton(frame);
        BackButton_3->setObjectName("BackButton_3");
        BackButton_3->setGeometry(QRect(76, 59, 201, 61));
        BackButton_3->setFlat(true);
        OurTeamButton_2 = new QPushButton(frame);
        OurTeamButton_2->setObjectName("OurTeamButton_2");
        OurTeamButton_2->setGeometry(QRect(308, 242, 131, 30));
        OurTeamButton_2->setFlat(true);
        ElramlyButton_2 = new QPushButton(frame);
        ElramlyButton_2->setObjectName("ElramlyButton_2");
        ElramlyButton_2->setGeometry(QRect(147, 243, 120, 30));
        ElramlyButton_2->setFlat(true);

        horizontalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Bouns);

        QMetaObject::connectSlotsByName(Bouns);
    } // setupUi

    void retranslateUi(QDialog *Bouns)
    {
        Bouns->setWindowTitle(QCoreApplication::translate("Bouns", "Dialog", nullptr));
        label->setText(QString());
        StartButtonPage2_2->setText(QString());
        AllButton_2->setText(QString());
        ExitButton_2->setText(QString());
        AboutUsButtonPage2_2->setText(QString());
        BackButton_3->setText(QString());
        OurTeamButton_2->setText(QString());
        ElramlyButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bouns: public Ui_Bouns {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNS_H
