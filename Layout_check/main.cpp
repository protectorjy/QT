#include "Layout_check.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Layout_check w;
    w.show();
    return a.exec();
}
