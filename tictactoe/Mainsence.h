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
        pix.load(":/new/prefix1/resources1/20211208165718.png");
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
    void change_p_1_1(QString);
    void change_p_1_2(QString);
    void change_p_1_3(QString);
    void change_p_2_1(QString);
    void change_p_2_2(QString);
    void change_p_2_3(QString);
    void change_p_3_1(QString);
    void change_p_3_2(QString);
    void change_p_3_3(QString);
    void computer_control();
    void people_pk();
    void algorithm();
    void succeed();
    void defeat();
    void succeed_1();
    void succeed_2();
    void dogfall();
    int number[3][3] = { 0 };
    bool control = false;
    int cp = 1;
private:
    Ui::MainsenceClass ui;
};