#include "Button2.h"
#include "homework_button.h"
#include <QApplication>
#include <QWidget>
#include<qdialog>

Button2::Button2(QWidget *parent)
	: QWidget(parent)
{
}

void Button2::windows()
{
    QDialog dlg;
    dlg.exec();
    /*Button2 w2;
    w2.show();
    m_Loop = new QEventLoop(this);
    m_Loop->exec();*/
}
Button2::~Button2()
{
}
