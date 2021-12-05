#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_main_control.h"

class main_control : public QMainWindow
{
    Q_OBJECT

public:
    main_control(QWidget *parent = Q_NULLPTR);

private:
    Ui::main_controlClass ui;
};
