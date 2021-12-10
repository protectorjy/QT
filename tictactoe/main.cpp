#include "Mainsence.h"
#include <QtWidgets/QApplication>
#include <QSplashScreen>  

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen* first = new QSplashScreen;
    (*first).setPixmap(QPixmap(":/new/prefix1/resources1/20211210200545.png"));
    (*first).show();
    for (int i = 0; i < 2000; i++)
    {
        (*first).repaint();
    }
    Mainsence w;
    w.show();
    delete first;
    return a.exec();
}