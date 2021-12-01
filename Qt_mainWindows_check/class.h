#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_mainWindows_check.h"


class Qt_mainWindows_check : public QMainWindow
{
    Q_OBJECT

public:
    Qt_mainWindows_check(QWidget *parent = Q_NULLPTR);


private:
    Ui::Qt_mainWindows_checkClass ui;
};
