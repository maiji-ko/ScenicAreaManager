#ifndef SCENICAREAMANAGERCLIENT_H
#define SCENICAREAMANAGERCLIENT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ScenicAreaManagerClient;
}
QT_END_NAMESPACE

class ScenicAreaManagerClient : public QWidget
{
    Q_OBJECT

public:
    ScenicAreaManagerClient(QWidget *parent = nullptr);
    ~ScenicAreaManagerClient();

private:
    Ui::ScenicAreaManagerClient *ui;
};
#endif // SCENICAREAMANAGERCLIENT_H
