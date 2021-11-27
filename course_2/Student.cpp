#include "Student.h"
#include<QDebug>
Student::Student(QObject *parent)
	: QObject(parent)
{
}

void Student::treat()
{
	qDebug() << "Eat";
}

void Student::treat(QString Foodname)
{
	qDebug() << "Teacher eat:" << Foodname.toUtf8().data();
}

Student::~Student()
{
}
