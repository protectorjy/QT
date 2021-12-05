#include "main_control.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_control w;
    w.show();
    return a.exec();
}
