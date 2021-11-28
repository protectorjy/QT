#pragma once

#include <QObject>

class Button1 : public QObject
{
	Q_OBJECT

public:
	Button1(QObject *parent);
	~Button1();
signals:
	void open();
};
