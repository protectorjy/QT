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
    if (number[0][0] != 1 && number[0][0] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_4->width(), ui.toolButton_4->height());
        ui.toolButton_4->setIconSize(QSize(ui.toolButton_4->width(), ui.toolButton_4->height()));
        ui.toolButton_4->setIcon(pix);
        ui.toolButton_4->setAutoRaise(true);
        number[0][0] = 1;
        control = true;
    }
}

void Mainsence::change1_2(QString image_people)
{
    if (number[0][1] != 1 && number[0][1] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_5->width(), ui.toolButton_5->height());
        ui.toolButton_5->setIconSize(QSize(ui.toolButton_5->width(), ui.toolButton_5->height()));
        ui.toolButton_5->setIcon(pix);
        ui.toolButton_5->setAutoRaise(true);
        number[0][1] = 1;
        control = true;
    }
}

void Mainsence::change1_3(QString image_people)
{
    if (number[0][2] != 1 && number[0][2] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_11->width(), ui.toolButton_11->height());
        ui.toolButton_11->setIconSize(QSize(ui.toolButton_11->width(), ui.toolButton_11->height()));
        ui.toolButton_11->setIcon(pix);
        ui.toolButton_11->setAutoRaise(true);
        number[0][2] = 1;
        control = true;
    }
}

void Mainsence::change2_1(QString image_people)
{
    if (number[1][0] != 1 && number[1][0] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_13->width(), ui.toolButton_13->height());
        ui.toolButton_13->setIconSize(QSize(ui.toolButton_13->width(), ui.toolButton_13->height()));
        ui.toolButton_13->setIcon(pix);
        ui.toolButton_13->setAutoRaise(true);
        number[1][0] = 1;
        control = true;
    }
}

void Mainsence::change2_2(QString image_people)
{
    if (number[1][1] != 1 && number[1][1] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_14->width(), ui.toolButton_14->height());
        ui.toolButton_14->setIconSize(QSize(ui.toolButton_14->width(), ui.toolButton_14->height()));
        ui.toolButton_14->setIcon(pix);
        ui.toolButton_14->setAutoRaise(true);
        number[1][1] = 1;
        control = true;
    }
}

void Mainsence::change2_3(QString image_people)
{
    if (number[1][2] != 1 && number[1][2] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_12->width(), ui.toolButton_12->height());
        ui.toolButton_12->setIconSize(QSize(ui.toolButton_12->width(), ui.toolButton_12->height()));
        ui.toolButton_12->setIcon(pix);
        ui.toolButton_12->setAutoRaise(true);
        number[1][2] = 1;
        control = true;
    }
}

void Mainsence::change3_1(QString image_people)
{
    if (number[2][0] != 1 && number[2][0] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_16->width(), ui.toolButton_16->height());
        ui.toolButton_16->setIconSize(QSize(ui.toolButton_16->width(), ui.toolButton_16->height()));
        ui.toolButton_16->setIcon(pix);
        ui.toolButton_16->setAutoRaise(true);
        number[2][0] = 1;
        control = true;
    }
}

void Mainsence::change3_2(QString image_people)
{
    if (number[2][1] != 1 && number[2][1] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_17->width(), ui.toolButton_17->height());
        ui.toolButton_17->setIconSize(QSize(ui.toolButton_17->width(), ui.toolButton_17->height()));
        ui.toolButton_17->setIcon(pix);
        ui.toolButton_17->setAutoRaise(true);
        number[2][1] = 1;
        control = true;
    }
}

void Mainsence::change3_3(QString image_people)
{
    if (number[2][2] != 1 && number[2][2] != 2)
    {
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_15->width(), ui.toolButton_15->height());
        ui.toolButton_15->setIconSize(QSize(ui.toolButton_15->width(), ui.toolButton_15->height()));
        ui.toolButton_15->setIcon(pix);
        ui.toolButton_15->setAutoRaise(true);
        number[2][2] = 1;
        control = true;
    }
}

void Mainsence::Change1_1(QString image_computer)
{
    if (number[0][0] != 1 && number[0][0] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_4->width(), ui.toolButton_4->height());
        ui.toolButton_4->setIconSize(QSize(ui.toolButton_4->width(), ui.toolButton_4->height()));
        ui.toolButton_4->setIcon(pix);
        ui.toolButton_4->setAutoRaise(true);
        number[0][0] = 2;
        control = false;
    }
}

void Mainsence::Change1_2(QString image_computer)
{
    if (number[0][1] != 1 && number[0][1] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_5->width(), ui.toolButton_5->height());
        ui.toolButton_5->setIconSize(QSize(ui.toolButton_5->width(), ui.toolButton_5->height()));
        ui.toolButton_5->setIcon(pix);
        ui.toolButton_5->setAutoRaise(true);
        number[0][1] = 2;
        control = false;
    }
}

void Mainsence::Change1_3(QString image_computer)
{
    if (number[0][2] != 1 && number[0][2] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_11->width(), ui.toolButton_11->height());
        ui.toolButton_11->setIconSize(QSize(ui.toolButton_11->width(), ui.toolButton_11->height()));
        ui.toolButton_11->setIcon(pix);
        ui.toolButton_11->setAutoRaise(true);
        number[0][2] = 2;
        control = false;
    }
}

void Mainsence::Change2_1(QString image_computer)
{
    if (number[1][0] != 1 && number[1][0] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_13->width(), ui.toolButton_13->height());
        ui.toolButton_13->setIconSize(QSize(ui.toolButton_13->width(), ui.toolButton_13->height()));
        ui.toolButton_13->setIcon(pix);
        ui.toolButton_13->setAutoRaise(true);
        number[1][0] = 2;
        control = false;
    }
}

void Mainsence::Change2_2(QString image_computer)
{
    if (number[1][1] != 1 && number[1][1] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_14->width(), ui.toolButton_14->height());
        ui.toolButton_14->setIconSize(QSize(ui.toolButton_14->width(), ui.toolButton_14->height()));
        ui.toolButton_14->setIcon(pix);
        ui.toolButton_14->setAutoRaise(true);
        number[1][1] = 2;
        control = false;
    }
}

void Mainsence::Change2_3(QString image_computer)
{
    if (number[1][2] != 1 && number[1][2] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_12->width(), ui.toolButton_12->height());
        ui.toolButton_12->setIconSize(QSize(ui.toolButton_12->width(), ui.toolButton_12->height()));
        ui.toolButton_12->setIcon(pix);
        ui.toolButton_12->setAutoRaise(true);
        number[1][2] = 2;
        control = false;
    }
}

void Mainsence::Change3_1(QString image_computer)
{
    if (number[2][0] != 1 && number[2][0] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_16->width(), ui.toolButton_16->height());
        ui.toolButton_16->setIconSize(QSize(ui.toolButton_16->width(), ui.toolButton_16->height()));
        ui.toolButton_16->setIcon(pix);
        ui.toolButton_16->setAutoRaise(true);
        number[2][0] = 2;
        control = false;
    }
}

void Mainsence::Change3_2(QString image_computer)
{
    if (number[2][1] != 1 && number[2][1] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_17->width(), ui.toolButton_17->height());
        ui.toolButton_17->setIconSize(QSize(ui.toolButton_17->width(), ui.toolButton_17->height()));
        ui.toolButton_17->setIcon(pix);
        ui.toolButton_17->setAutoRaise(true);
        number[2][1] = 2;
        control = false;
    }
}

void Mainsence::Change3_3(QString image_computer)
{
    if (number[2][2] != 1 && number[2][2] != 2 && control)
    {
        QPixmap pix;
        pix.load(image_computer);
        pix = pix.scaled(ui.toolButton_15->width(), ui.toolButton_15->height());
        ui.toolButton_15->setIconSize(QSize(ui.toolButton_15->width(), ui.toolButton_15->height()));
        ui.toolButton_15->setIcon(pix);
        ui.toolButton_15->setAutoRaise(true);
        number[2][2] = 2;
        control = false;
    }
}

void Mainsence::succeed()
{
    if (QMessageBox::Yes == QMessageBox::question(this, "WIN", "You are win,do you want to play again?"))
    {
        origin(":/new/prefix1/resources1/20211208165718.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
    }
    else
    {
        ui.stackedWidget->setCurrentIndex(0);
        origin(":/new/prefix1/resources1/20211208165718.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
    }
}

void Mainsence::defeat()
{
    if (QMessageBox::Yes == QMessageBox::question(this, "DEFEAT", "You are define,do you want to play again?"))
    {
        origin(":/new/prefix1/resources1/20211208165718.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
    }
    else
    {
        ui.stackedWidget->setCurrentIndex(0);
        origin(":/new/prefix1/resources1/20211208165718.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
    }
}

void Mainsence::computer_control()
{
    if ((number[0][0] == 1 && number[0][1] == 1 && number[0][2] == 1) || (number[1][0] == 1 && number[1][1] == 1 && number[1][2] == 1) || (number[3][0] == 1 && number[3][1] == 1 && number[3][2] == 1) || (number[0][0] == 1 && number[1][0] == 1 && number[2][0] == 1) || (number[0][1] == 1 && number[1][1] == 1 && number[2][1] == 1) || (number[0][2] == 1 && number[1][2] == 1 && number[2][2] == 1) || (number[0][0] == 1 && number[1][1] == 1 && number[2][2] == 1) || (number[0][2] == 1 && number[1][1] == 1 && number[2][0] == 1))
    {
        succeed();
    }
    else if ((number[0][0] == 2 && number[0][1] == 2 && number[0][2] == 2) || (number[1][0] == 2 && number[1][1] == 2 && number[1][2] == 2) || (number[3][0] == 2 && number[3][1] == 2 && number[3][2] == 2) || (number[0][0] == 2 && number[1][0] == 2 && number[2][0] == 2) || (number[0][1] == 2 && number[1][1] == 2 && number[2][1] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2))
    {
        defeat();
    }
    algorithm();
    if ((number[0][0] == 1 && number[0][1] == 1 && number[0][2] == 1) || (number[1][0] == 1 && number[1][1] == 1 && number[1][2] == 1) || (number[3][0] == 1 && number[3][1] == 1 && number[3][2] == 1) || (number[0][0] == 1 && number[1][0] == 1 && number[2][0] == 1) || (number[0][1] == 1 && number[1][1] == 1 && number[2][1] == 1) || (number[0][2] == 1 && number[1][2] == 1 && number[2][2] == 1) || (number[0][0] == 1 && number[1][1] == 1 && number[2][2] == 1) || (number[0][2] == 1 && number[1][1] == 1 && number[2][0] == 1))
    {
        succeed();
    }
    else if ((number[0][0] == 2 && number[0][1] == 2 && number[0][2] == 2) || (number[1][0] == 2 && number[1][1] == 2 && number[1][2] == 2) || (number[3][0] == 2 && number[3][1] == 2 && number[3][2] == 2) || (number[0][0] == 2 && number[1][0] == 2 && number[2][0] == 2) || (number[0][1] == 2 && number[1][1] == 2 && number[2][1] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2))
    {
        defeat();
    }
}