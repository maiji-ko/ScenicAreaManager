#include "scenicareamanagerserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScenicAreaManagerServer w;
    w.show();
    return a.exec();
}
