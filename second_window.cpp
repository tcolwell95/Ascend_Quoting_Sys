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



    for (it = newlist.begin(); it != newlist.end(); it++){

        for(int i = 0; i < 5; i++){
             QString str = it->getAll(i);
         ui->listWidget->addItem(str);
        }

}

}

Second_window::~Second_window()
{
    delete ui;
}

