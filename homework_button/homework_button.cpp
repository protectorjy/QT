#include "homework_button.h"
#include<QPushButton>

homework_button::homework_button(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    (*this).B1 = new Button1(this);
    (*this).B2 = new Button2(this);
    void(Button1:: * sign_1)() = &Button1::open;
    void(Button2:: * slots_1)() = &Button2::windows;
    QPushButton* b1 = new QPushButton("Open", this);
    QPushButton* b2 = new QPushButton("Quit", this);
    resize(900, 700);
    (*b1).move(400, 100);
    (*b1).resize(100, 50);
    (*b2).resize(100, 50);
    (*b2).move(400, 600);
    connect(b1, &QPushButton::clicked, this, &QWidget::close);
    connect(b1, &QPushButton::clicked, this, &homework_button::start);
    connect(b2, &QPushButton::clicked, this, &QWidget::close);
    connect(B1, sign_1, B2, slots_1);
}

void homework_button::start()
{
    emit (*B1).open();
}





