#pragma once

#include <QtWidgets/QWidget>
#include "ui_course_1.h"

class course_1 : public QWidget
{
    Q_OBJECT

public:
    course_1(QWidget *parent = Q_NULLPTR);

private:
    Ui::course_1Class ui;
};
