#ifndef SECOND_WINDOW_H
#define SECOND_WINDOW_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class Second_window;
}

class Second_window : public QDialog
{
    Q_OBJECT

public:
    explicit Second_window(QWidget *parent = nullptr);
    ~Second_window();
    void setlist(list<Quote> it){
       newlist = it;
    }

private:
    Ui::Second_window *ui;
    list<Quote> newlist;
};

#endif // SECOND_WINDOW_H
