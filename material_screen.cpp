#include "material_screen.h"
#include "ui_material_screen.h"

material_screen::material_screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::material_screen)
{
    ui->setupUi(this);
}

material_screen::~material_screen()
{
    delete ui;
}
