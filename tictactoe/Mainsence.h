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
private:
    Ui::MainsenceClass ui;
};
