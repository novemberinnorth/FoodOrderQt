#ifndef FOODORDERQT_H
#define FOODORDERQT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class FoodOrderQt;
}
QT_END_NAMESPACE

class FoodOrderQt : public QMainWindow
{
    Q_OBJECT

public:
    FoodOrderQt(QWidget *parent = nullptr);
    ~FoodOrderQt();

private:
    Ui::FoodOrderQt *ui;
};
#endif // FOODORDERQT_H
