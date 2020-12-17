#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_pressed();

    void on_addSection_clicked();

    void on_shingletype_textEdited(const QString &arg1);

    void on_pitchNumerator_valueChanged(int arg1);

    void on_premiumCheckbox_stateChanged(int arg1);

    void on_unitSquare_textEdited(const QString &arg1);

    void on_roofHeight_valueChanged(int arg1);

    void on_addSection_pressed();

    void on_updateButton_pressed();

    void on_profitSlider_sliderMoved(int position);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
