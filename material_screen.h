#ifndef MATERIAL_SCREEN_H
#define MATERIAL_SCREEN_H

#include <QDialog>

namespace Ui {
class material_screen;
}

class material_screen : public QDialog
{
    Q_OBJECT

public:
    explicit material_screen(QWidget *parent = nullptr);
    ~material_screen();

private:
    Ui::material_screen *ui;
};

#endif // MATERIAL_SCREEN_H
