#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Layout_check.h"

class Layout_check : public QMainWindow
{
    Q_OBJECT

public:
    Layout_check(QWidget *parent = Q_NULLPTR);

private:
    Ui::Layout_checkClass ui;
};
