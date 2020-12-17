#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second_window.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i = 0; i < 20; i++){
        ui->roof_List->addItem("item " );
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_generateButton_pressed()
{
    Second_window materialscreen;
    materialscreen.setModal(true);
    materialscreen.exec();
}

void MainWindow::on_addSection_clicked()
{

}

void MainWindow::on_shingletype_textEdited(const QString &arg1)
{

}

void MainWindow::on_pitchNumerator_valueChanged(int arg1)
{

}

void MainWindow::on_premiumCheckbox_stateChanged(int arg1)
{

}

void MainWindow::on_unitSquare_textEdited(const QString &arg1)
{

}

void MainWindow::on_roofHeight_valueChanged(int arg1)
{

}

void MainWindow::on_addSection_pressed()
{

}

void MainWindow::on_updateButton_pressed()
{

}

void MainWindow::on_profitSlider_sliderMoved(int position)
{
    QString st = QString::number(position);
    ui->profit_label->setText(st + '%');
}
