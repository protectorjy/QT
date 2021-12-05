#pragma once

#include <QtWidgets/QWidget>
#include "ui_question.h"

class question : public QWidget
{
    Q_OBJECT

public:
    question(QWidget *parent = Q_NULLPTR);

private:
    Ui::questionClass ui;
};
