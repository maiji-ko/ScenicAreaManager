#ifndef SCENICAREAMANAGERSERVER_H
#define SCENICAREAMANAGERSERVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ScenicAreaManagerServer;
}
QT_END_NAMESPACE

class ScenicAreaManagerServer : public QWidget
{
    Q_OBJECT

public:
    ScenicAreaManagerServer(QWidget *parent = nullptr);
    ~ScenicAreaManagerServer();

private:
    Ui::ScenicAreaManagerServer *ui;
};
#endif // SCENICAREAMANAGERSERVER_H
