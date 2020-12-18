#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Quote.h>
#include "second_window.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);

      ~MainWindow();

    list<Quote> getlist(){
        return roof_section;
    }



private slots:
    void on_generateButton_pressed();

    void on_shingletype_textEdited(const QString &arg1);

    void on_pitchNumerator_valueChanged(int arg1);

    void on_premiumCheckbox_stateChanged(int arg1);

    void on_roofHeight_valueChanged(int arg1);

    void on_addSection_pressed();

    void on_updateButton_pressed();

    void on_profitSlider_sliderMoved(int position);

    void on_unit_square_spin_box_valueChanged(double arg1);

protected:
     list<Quote> roof_section;
private:
    Ui::MainWindow *ui;
    Quote mainQuote;

   // roof_section.push_front(quote);
};
#endif // MAINWINDOW_H
