#include "Qt_Source.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_Source w;
    w.show();
    return a.exec();
}
