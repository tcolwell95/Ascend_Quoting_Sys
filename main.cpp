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

    return a.exec();
}
