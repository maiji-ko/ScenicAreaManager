#include "scenicareamanagerclient.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScenicAreaManagerClient w;
    w.show();
    return a.exec();
}
