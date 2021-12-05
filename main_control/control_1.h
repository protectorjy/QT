#pragma once

#include <QWidget>
#include "ui_control_1.h"

class control_1 : public QWidget
{
	Q_OBJECT

public:
	control_1(QWidget *parent = Q_NULLPTR);
	~control_1();

private:
	Ui::control_1 ui;
};
