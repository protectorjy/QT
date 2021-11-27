#include "course_2.h"
#include<QPushButton>

course_2::course_2(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    (*this).t = new Teacher(this);
    (*this).s = new Student(this);
    void (Teacher:: * tsign1)(QString) = &Teacher::hungry;
    void(Teacher:: * tsign2)(void) = &Teacher::hungry;
    void (Student:: * sslots1)(QString) = &Student::treat;
    void (Student:: * sslots2)(void) = &Student::treat;
    connect(t, tsign1, s, sslots1);
    connect(t, tsign2, s, sslots2);
    
    QPushButton(*b1) = new QPushButton("classover1", this);
    QPushButton(*b2) = new QPushButton("quit", this);
    (*b1).move(400, 100);
    (*b2).move(400, 500);
    (*b1).resize(200, 70);
    (*b2).resize(200, 70);
    resize(900, 700);
    connect(b1, &QPushButton::clicked, this, &course_2::classover);
    connect(b2, &QPushButton::clicked, t, tsign2);
    connect(b2, &QPushButton::clicked, this, &QWidget::close);
    //disconnect(t, tsign2, s, sslots2);

}

void course_2::classover()
{
    emit(*t).hungry();
    emit(*t).hungry("KFC");
}
