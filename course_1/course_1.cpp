#include "course_1.h"
#include<iostream>
#include<QPushButton>
using namespace std;

course_1::course_1(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("tictactoe");
    QPushButton* b1 = new QPushButton("play", this);
    (*b1).move(450, 480);
    (*b1).resize(100, 80);
    QPushButton* b2 = new QPushButton("quit", this);
    (*b2).move(450, 800); 
    (*b2).resize(100, 80);
    resize(1000, 960);
    connect(b2, &QPushButton::clicked, this, &QWidget::close);
}
