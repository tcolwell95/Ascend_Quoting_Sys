#include "second_window.h"
#include "ui_second_window.h"
#include "Quote.h"
#include <QString>
#include <list>
#include "mainwindow.h"

Second_window::Second_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Second_window)
{
    ui->setupUi(this);

    list<Quote>::iterator it;
    list<Quote> newlist;



    //for (it = secondList->begin(); it != secondList->end(); it++){
      //  QString str = "Hello";
        //        ui->listWidget->addItem(str);

}



Second_window::~Second_window()
{
    delete ui;
}

