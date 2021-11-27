#pragma once

#include <QObject>

class Student : public QObject
{
	Q_OBJECT

public:
	Student(QObject *parent);
	~Student();
public slots:
	void treat();
	void treat(QString Foodname);
};
