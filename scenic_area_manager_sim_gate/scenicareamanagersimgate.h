#ifndef SCENICAREAMANAGERSIMGATE_H
#define SCENICAREAMANAGERSIMGATE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ScenicAreaManagerSimGate;
}
QT_END_NAMESPACE

class ScenicAreaManagerSimGate : public QWidget
{
    Q_OBJECT

public:
    ScenicAreaManagerSimGate(QWidget *parent = nullptr);
    ~ScenicAreaManagerSimGate();

private:
    Ui::ScenicAreaManagerSimGate *ui;
};
#endif // SCENICAREAMANAGERSIMGATE_H
