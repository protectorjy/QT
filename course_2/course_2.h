#pragma once

#include <QtWidgets/QWidget>
#include "ui_course_2.h"
#include "Teacher.h"
#include "Student.h"

class course_2 : public QWidget
{
    Q_OBJECT

public:
    course_2(QWidget *parent = Q_NULLPTR);

private:
    Ui::course_2Class ui;
    Teacher* t;
    Student* s;
    void classover();
};
