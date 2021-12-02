#pragma once

#include <QtWidgets/QWidget>
#include "ui_control.h"

class control : public QWidget
{
    Q_OBJECT

public:
    control(QWidget *parent = Q_NULLPTR);

private:
    Ui::controlClass ui;
};
