#include "foodorderqt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FoodOrderQt w;
    w.show();
    return a.exec();
}
