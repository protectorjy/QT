#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Mainsence.h"
#include<qpainter>

class Mainsence : public QMainWindow
{
    Q_OBJECT

public:
    Mainsence(QWidget *parent = Q_NULLPTR);
    void Mainsence::paintEvent(QPaintEvent*)
    {
        QPainter painter(this);
        QPixmap pix;
        pix.load(":/new/prefix1/resources1/20211207223750.png");
        painter.drawPixmap(0, 0, this->width(), this->height(), pix);
    }
    void origin(QString);
    void change1_1(QString);
    void change1_2(QString);
    void change1_3(QString);
    void change2_1(QString);
    void change2_2(QString);
    void change2_3(QString);
    void change3_1(QString);
    void change3_2(QString);
    void change3_3(QString);
    void Change1_1(QString);
    void Change1_2(QString);
    void Change1_3(QString);
    void Change2_1(QString);
    void Change2_2(QString);
    void Change2_3(QString);
    void Change3_1(QString);
    void Change3_2(QString);
    void Change3_3(QString);
    void computer_control();
    void algorithm();
    void succeed();
    void defeat();
    void dogfall();
    int number[3][3] = { 0 };
    bool control = false;
private:
    Ui::MainsenceClass ui;
};
