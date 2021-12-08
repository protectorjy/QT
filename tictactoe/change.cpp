#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>

void Mainsence::origin(QString image)
{
    QPixmap pix;
    pix.load(image);
    pix = pix.scaled(ui.toolButton_4->width(), ui.toolButton_4->height());
    ui.toolButton_4->setIconSize(QSize(ui.toolButton_4->width(), ui.toolButton_4->height()));
    ui.toolButton_4->setIcon(pix);
    ui.toolButton_4->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_5->width(), ui.toolButton_5->height());
    ui.toolButton_5->setIconSize(QSize(ui.toolButton_5->width(), ui.toolButton_5->height()));
    ui.toolButton_5->setIcon(pix);
    ui.toolButton_5->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_11->width(), ui.toolButton_11->height());
    ui.toolButton_11->setIconSize(QSize(ui.toolButton_11->width(), ui.toolButton_11->height()));
    ui.toolButton_11->setIcon(pix);
    ui.toolButton_11->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_12->width(), ui.toolButton_12->height());
    ui.toolButton_12->setIconSize(QSize(ui.toolButton_12->width(), ui.toolButton_12->height()));
    ui.toolButton_12->setIcon(pix);
    ui.toolButton_12->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_11->width(), ui.toolButton_11->height());
    ui.toolButton_13->setIconSize(QSize(ui.toolButton_13->width(), ui.toolButton_13->height()));
    ui.toolButton_13->setIcon(pix);
    ui.toolButton_13->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_14->width(), ui.toolButton_14->height());
    ui.toolButton_14->setIconSize(QSize(ui.toolButton_14->width(), ui.toolButton_14->height()));
    ui.toolButton_14->setIcon(pix);
    ui.toolButton_14->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_15->width(), ui.toolButton_15->height());
    ui.toolButton_15->setIconSize(QSize(ui.toolButton_15->width(), ui.toolButton_15->height()));
    ui.toolButton_15->setIcon(pix);
    ui.toolButton_15->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_16->width(), ui.toolButton_16->height());
    ui.toolButton_16->setIconSize(QSize(ui.toolButton_16->width(), ui.toolButton_16->height()));
    ui.toolButton_16->setIcon(pix);
    ui.toolButton_16->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_17->width(), ui.toolButton_17->height());
    ui.toolButton_17->setIconSize(QSize(ui.toolButton_17->width(), ui.toolButton_17->height()));
    ui.toolButton_17->setIcon(pix);
    ui.toolButton_17->setAutoRaise(true);
}

void Mainsence::change1_1(QString image_people)
{
    if (number[0][0] != 1)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_4->width(), ui.toolButton_4->height());
        ui.toolButton_4->setIconSize(QSize(ui.toolButton_4->width(), ui.toolButton_4->height()));
        ui.toolButton_4->setIcon(pix);
        ui.toolButton_4->setAutoRaise(true);
        number[0][0] = 1;
    }
}

void Mainsence::change1_2(QString image_people)
{
    if (number[0][1] != 1)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_5->width(), ui.toolButton_5->height());
        ui.toolButton_5->setIconSize(QSize(ui.toolButton_5->width(), ui.toolButton_5->height()));
        ui.toolButton_5->setIcon(pix);
        ui.toolButton_5->setAutoRaise(true);
        number[0][1] = 1;
    }
}

void Mainsence::change1_3(QString image_people)
{
    if (number[0][2] != 1)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_11->width(), ui.toolButton_11->height());
        ui.toolButton_11->setIconSize(QSize(ui.toolButton_11->width(), ui.toolButton_11->height()));
        ui.toolButton_11->setIcon(pix);
        ui.toolButton_11->setAutoRaise(true);
        number[0][2] = 1;
    }
}

void Mainsence::change2_1(QString image_people)
{
    if (number[1][0] != 1)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_13->width(), ui.toolButton_13->height());
        ui.toolButton_13->setIconSize(QSize(ui.toolButton_13->width(), ui.toolButton_13->height()));
        ui.toolButton_13->setIcon(pix);
        ui.toolButton_13->setAutoRaise(true);
        number[1][0] = 1;
    }
}

void Mainsence::change2_2(QString image_people)
{
    if (number[1][1] != 1)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_14->width(), ui.toolButton_14->height());
        ui.toolButton_14->setIconSize(QSize(ui.toolButton_14->width(), ui.toolButton_14->height()));
        ui.toolButton_14->setIcon(pix);
        ui.toolButton_14->setAutoRaise(true);
        number[1][1] = 1;
    }
}