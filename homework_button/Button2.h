#pragma once

#include <QWidget.h>
#include<qeventloop.h>
class Button2 : public QWidget
{
	Q_OBJECT

public:
	Button2(QWidget* parent = Q_NULLPTR);
	~Button2();
	void windows();
	QEventLoop* m_Loop;
	Button2* w2;
};
