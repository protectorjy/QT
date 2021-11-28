#pragma once
#include <QObject>
#include <QtWidgets/QApplication>
class Button2 : public QObject
{
	Q_OBJECT

public:
	Button2(QObject *parent);
	~Button2();
	int windows(int argc, char* argv[]);
};
