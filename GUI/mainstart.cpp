#include<iostream>
using namespace std;
#include "mainstart.h"
#include "ui_mainstart.h"
#include "effects_page.h"
#include "mainwindow.h"
#include "elramly_page.h"
#include "bouns.h"
#include "our_team.h"
#include "mainstart.h"
#include <QFileDialog>
#include <QPixmap>
#include <QImage>
#include <QVector>
#include <QQueue>
#include <QPainter>
#include"filters.h"
#include <QMessageBox>



/*
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QMessageBox>

*/
MainStart::MainStart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainStart)
{
    ui->setupUi(this);
    setWindowTitle("Baby Photoshop");
    QPixmap pix7("../../project photos/10.png");
    ui->label->setPixmap(pix7);

}
MainStart::~MainStart()
{
    delete ui;
}

void MainStart::on_ExitButton_2_clicked()
{
    close();
}


void MainStart::on_EffectsButtonPage2_2_clicked()
{
    this->hide();
    Effects_page effectspage;
    effectspage.setModal(true);
    effectspage.exec();
}


void MainStart::on_upload_image_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr("Images (*.png *.xpm *.jpg)"));
    if (!file_name.isEmpty()){
        image.load(file_name);
        QPixmap pix = QPixmap::fromImage(image);
        int w = ui->label_pic->width();
        int h = ui->label_pic->height();
        pix = pix.scaled(w, h, Qt::KeepAspectRatio);

        int x = (ui->label_pic->width() - pix.width()) / 2;
        int y = (ui->label_pic->height() - pix.height()) / 2;

        QPixmap centeredPixmap(w, h);
        centeredPixmap.fill(Qt::transparent);
        QPainter painter(&centeredPixmap);
        painter.drawPixmap(x, y, pix);
        ui->label_pic->setPixmap(centeredPixmap);

    }

}

void MainStart::on_BackButton_3_clicked()
{
    close();
    MainWindow *mainWindow = new MainWindow;
    mainWindow->show();
}

void MainStart::updateDisplayedImage() {
    QSize labelSize = ui->label_pic->size(); // Size of the label
    QImage scaledImage = image.scaled(labelSize, Qt::KeepAspectRatio);

    QPixmap pixmap = QPixmap::fromImage(scaledImage);

    // Calculate the position to center the pixmap within the label
    int xPos = (labelSize.width() - pixmap.width()) / 2;
    int yPos = (labelSize.height() - pixmap.height()) / 2;

    // Create a centered pixmap with transparent background
    QPixmap centeredPixmap(labelSize);
    centeredPixmap.fill(Qt::transparent);
    QPainter painter(&centeredPixmap);
    painter.drawPixmap(xPos, yPos, pixmap);

    // Set the centered pixmap to the label
    ui->label_pic_2->setPixmap(centeredPixmap);
}
void MainStart::on_SaveButton_clicked() {
    // Check if there is a modified pixmap in ui->label_pic_2
    if (!ui->label_pic_2->pixmap()) {
        QMessageBox::critical(this, tr("Error"), tr("No modified image to save!"));
        return;
    }

    // Get the modified pixmap from ui->label_pic_2
    QPixmap modifiedPixmap = ui->label_pic_2->pixmap();

    // Convert the modified pixmap to QImage
    QImage modifiedImage = modifiedPixmap.toImage();

    // Save the modified image
    QString saveFileName = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.jpg *.bmp)"));
    if (!saveFileName.isEmpty()) {
        if (!modifiedImage.save(saveFileName)) {
            QMessageBox::critical(this, tr("Error"), tr("Error saving image!"));
        } else {
            QMessageBox::information(this, tr("Success"), tr("Image saved successfully!"));
        }
    } else {
        QMessageBox::warning(this, tr("Warning"), tr("Save operation canceled!"));
    }
}

void MainStart::on_filter_1_clicked()
{
    // Reload the original image

        // Apply the grayscale filter
        greyscale(image);

        // Update the displayed image without changing label position
        updateDisplayedImage();
}

void MainStart::on_filter_2_clicked()
{
    Black_and_White(image);
     updateDisplayedImage();
}


void MainStart::on_filter_3_clicked()
{
    invert(image);
    updateDisplayedImage();
}


void MainStart::on_filter_7_clicked()
{
    lighten_and_darken(image);
    updateDisplayedImage();
}


void MainStart::on_filter_10_clicked()
{
    Detect_Image_Edges(image);
    updateDisplayedImage();
}


void MainStart::on_filter_12_clicked()
{
    blur(image);
    updateDisplayedImage();
}


void MainStart::on_filter_13_clicked()
{
    wano(image);
     updateDisplayedImage();
}


void MainStart::on_filter_15_clicked()
{
    old_tv(image);
    updateDisplayedImage();
}


void MainStart::on_filter_16_clicked()
{
    purple((image));
     updateDisplayedImage();
}


void MainStart::on_filter_17_clicked()
{
    infrared(image);
    updateDisplayedImage();
}

