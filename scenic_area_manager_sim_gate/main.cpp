#include "scenicareamanagersimgate.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScenicAreaManagerSimGate w;
    w.show();
    return a.exec();
}
