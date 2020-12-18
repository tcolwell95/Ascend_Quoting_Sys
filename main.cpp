#include "mainwindow.h"
#include "second_window.h"
#include <QApplication>
#include "Quote.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Second_window w2;
    w.show();
   list<Quote> templist = w.getlist();
   w2.setlist(templist);

    return a.exec();
}
