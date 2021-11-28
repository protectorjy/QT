#include "Button2.h"
#include "homework_button.h"

Button2::Button2(QObject *parent)
	: QObject(parent)
{
}

int Button2::windows(int argc, char* argv[])
{
    QApplication a(argc, argv);
    homework_button w2;
    w2.show();
    return a.exec();
}
Button2::~Button2()
{
}
