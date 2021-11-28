#pragma once
#include <QtWidgets/QWidget>
#include "ui_homework_button.h"
#include "Button1.h"
#include "Button2.h"

class homework_button : public QWidget
{
    Q_OBJECT

public:
    homework_button(QWidget *parent = Q_NULLPTR);

private:
    Ui::homework_buttonClass ui;
    Button1* B1;
    Button2* B2;
};
