#include "class.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_mainWindows_check w;
    w.show();
    return a.exec();
}
