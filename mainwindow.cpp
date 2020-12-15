#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second_window.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Second_window materialscreen;
    materialscreen.setModal(true);
    materialscreen.exec();
}
