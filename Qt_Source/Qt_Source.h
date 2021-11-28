#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Source.h"

class Qt_Source : public QMainWindow
{
    Q_OBJECT

public:
    Qt_Source(QWidget *parent = Q_NULLPTR);

private:
    Ui::Qt_SourceClass ui;
};
