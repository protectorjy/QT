#include "homework_button.h"
#include<QPushButton>

homework_button::homework_button(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    (*this).B1 = new Button1(this);
    (*this).B2 = new Button2(this);
    void(Button1:: * sign_1)(int,char**) = &Button1::open;
    int(Button2:: * slots_1)(int, char**) = &Button2::windows;
    QPushButton* b1 = new QPushButton("Open", this);
    QPushButton* b2 = new QPushButton("Quit", this);
    resize(900, 700);
    (*b1).move(400, 100);
    (*b1).resize(100, 50);
    (*b2).resize(100, 50);
    (*b2).move(400, 600);
}
