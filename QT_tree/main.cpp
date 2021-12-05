#include "QT_tree.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_tree w;
    w.show();
    return a.exec();
}
