#ifndef MAINSTART_H
#define MAINSTART_H

#include <QDialog>
#include <QMessageBox>
#include<string>
#include<iostream>
#include <QImage>
#include<QObject>
#include"filters.h"
using namespace std;


namespace Ui {
class MainStart;
}

class MainStart :  public QDialog,public filters
{
    Q_OBJECT

public:
    explicit MainStart(QWidget *parent = nullptr);
    ~MainStart();

private slots:
    void on_ExitButton_2_clicked();

    void on_EffectsButtonPage2_2_clicked();

   // void on_ExitButton_4_clicked();

    void on_upload_image_clicked();

    void on_BackButton_3_clicked();

    //void on_Camera_button_clicked();

    void on_filter_1_clicked();

    void updateDisplayedImage();


    void on_SaveButton_clicked();

    void on_filter_2_clicked();

    void on_filter_3_clicked();

    void on_filter_7_clicked();

    void on_filter_10_clicked();

    void on_filter_12_clicked();

    void on_filter_13_clicked();

    void on_filter_15_clicked();

    void on_filter_16_clicked();

    void on_filter_17_clicked();

private:
    Ui::MainStart *ui;

    QImage image;
};

#endif // MAINSTART_H


