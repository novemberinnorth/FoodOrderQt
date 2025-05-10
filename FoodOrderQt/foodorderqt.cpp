#include "foodorderqt.h"
#include "ui_foodorderqt.h"

FoodOrderQt::FoodOrderQt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FoodOrderQt)
{
    ui->setupUi(this);
}

FoodOrderQt::~FoodOrderQt()
{
    delete ui;
}
