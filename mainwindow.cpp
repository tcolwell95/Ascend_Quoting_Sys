#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second_window.h"
#include "Quote.h"
#include <QString>
#include <list>

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


void MainWindow::on_generateButton_pressed() //passes
{
    Second_window materialscreen;
    materialscreen.setModal(true);
    materialscreen.exec();

}



void MainWindow::on_shingletype_textEdited(const QString &arg1)
{
    //mainQuote.setShingleType(arg1);
}

void MainWindow::on_pitchNumerator_valueChanged(int arg1)
{
    mainQuote.setPitchNumerator(arg1);
}

void MainWindow::on_premiumCheckbox_stateChanged(int arg1)
{
    if (arg1 == 0)
    mainQuote.setPremiumFeature(false);
    else
    mainQuote.setPremiumFeature(true);
}



void MainWindow::on_roofHeight_valueChanged(int arg1)
{

}

void MainWindow::on_addSection_pressed()
{
    int count = 1;
   roof_section.push_front(mainQuote);
   double cost = mainQuote.calculateQuoteSections();
   QString labelx = "Roof Section " " price: $" + QString::number(cost);
   ui->roof_List->addItem(labelx);
   count++;
}

void MainWindow::on_updateButton_pressed()
{
     QString labely = "Total price: $" + QString::number(mainQuote.getRunningTotal());
    ui->totalView->addItem(labely);
}

void MainWindow::on_profitSlider_sliderMoved(int position)
{
    QString st = QString::number(position);
    ui->profit_label->setText(st + '%');
    mainQuote.setMarkUp(position);

}

void MainWindow::on_unit_square_spin_box_valueChanged(double arg1)
{
    mainQuote.setUnitSquare(arg1);
}
