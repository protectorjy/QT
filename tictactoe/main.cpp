#include "Mainsence.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mainsence w;
    w.show();
    return a.exec();
}