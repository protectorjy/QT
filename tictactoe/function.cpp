#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>
#include <QtMultimedia/qsound>
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
    pix = pix.scaled(ui.toolButton_9->width(), ui.toolButton_9->height());
    ui.toolButton_9->setIconSize(QSize(ui.toolButton_9->width(), ui.toolButton_9->height()));
    ui.toolButton_9->setIcon(pix);
    ui.toolButton_9->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_10->width(), ui.toolButton_10->height());
    ui.toolButton_10->setIconSize(QSize(ui.toolButton_10->width(), ui.toolButton_10->height()));
    ui.toolButton_10->setIcon(pix);
    ui.toolButton_10->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_18->width(), ui.toolButton_18->height());
    ui.toolButton_18->setIconSize(QSize(ui.toolButton_18->width(), ui.toolButton_18->height()));
    ui.toolButton_18->setIcon(pix);
    ui.toolButton_18->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_24->width(), ui.toolButton_24->height());
    ui.toolButton_24->setIconSize(QSize(ui.toolButton_24->width(), ui.toolButton_24->height()));
    ui.toolButton_24->setIcon(pix);
    ui.toolButton_24->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_19->width(), ui.toolButton_19->height());
    ui.toolButton_19->setIconSize(QSize(ui.toolButton_19->width(), ui.toolButton_19->height()));
    ui.toolButton_19->setIcon(pix);
    ui.toolButton_19->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_20->width(), ui.toolButton_20->height());
    ui.toolButton_20->setIconSize(QSize(ui.toolButton_20->width(), ui.toolButton_20->height()));
    ui.toolButton_20->setIcon(pix);
    ui.toolButton_20->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_21->width(), ui.toolButton_21->height());
    ui.toolButton_21->setIconSize(QSize(ui.toolButton_21->width(), ui.toolButton_21->height()));
    ui.toolButton_21->setIcon(pix);
    ui.toolButton_21->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_22->width(), ui.toolButton_22->height());
    ui.toolButton_22->setIconSize(QSize(ui.toolButton_22->width(), ui.toolButton_22->height()));
    ui.toolButton_22->setIcon(pix);
    ui.toolButton_22->setAutoRaise(true);
    pix = pix.scaled(ui.toolButton_23->width(), ui.toolButton_23->height());
    ui.toolButton_23->setIconSize(QSize(ui.toolButton_23->width(), ui.toolButton_23->height()));
    ui.toolButton_23->setIcon(pix);
    ui.toolButton_23->setAutoRaise(true);
}

void Mainsence::change1_1(QString image_people, QSound* sound_open)
{
    if (number[0][0] != 1 && number[0][0] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change1_2(QString image_people, QSound* sound_open)
{
    if (number[0][1] != 1 && number[0][1] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change1_3(QString image_people, QSound* sound_open)
{
    if (number[0][2] != 1 && number[0][2] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change2_1(QString image_people, QSound* sound_open)
{
    if (number[1][0] != 1 && number[1][0] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change2_2(QString image_people, QSound* sound_open)
{
    if (number[1][1] != 1 && number[1][1] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change2_3(QString image_people, QSound* sound_open)
{
    if (number[1][2] != 1 && number[1][2] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change3_1(QString image_people, QSound* sound_open)
{
    if (number[2][0] != 1 && number[2][0] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change3_2(QString image_people, QSound* sound_open)
{
    if (number[2][1] != 1 && number[2][1] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change3_3(QString image_people, QSound* sound_open)
{
    if (number[2][2] != 1 && number[2][2] != 2)
    {
        (*sound_open).play();
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

void Mainsence::change_p_1_1(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_9->width(), ui.toolButton_9->height());
        ui.toolButton_9->setIconSize(QSize(ui.toolButton_9->width(), ui.toolButton_9->height()));
        ui.toolButton_9->setIcon(pix);
        ui.toolButton_9->setAutoRaise(true);
}

void Mainsence::change_p_1_2(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_10->width(), ui.toolButton_10->height());
        ui.toolButton_10->setIconSize(QSize(ui.toolButton_10->width(), ui.toolButton_10->height()));
        ui.toolButton_10->setIcon(pix);
        ui.toolButton_10->setAutoRaise(true);
}

void Mainsence::change_p_1_3(QString image_people, QSound* sound_open)
{ 
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_18->width(), ui.toolButton_18->height());
        ui.toolButton_18->setIconSize(QSize(ui.toolButton_18->width(), ui.toolButton_18->height()));
        ui.toolButton_18->setIcon(pix);
        ui.toolButton_18->setAutoRaise(true);
}

void Mainsence::change_p_2_1(QString image_people, QSound* sound_open)
{   
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_19->width(), ui.toolButton_19->height());
        ui.toolButton_19->setIconSize(QSize(ui.toolButton_19->width(), ui.toolButton_19->height()));
        ui.toolButton_19->setIcon(pix);
        ui.toolButton_19->setAutoRaise(true);
}

void Mainsence::change_p_2_2(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_20->width(), ui.toolButton_20->height());
        ui.toolButton_20->setIconSize(QSize(ui.toolButton_20->width(), ui.toolButton_20->height()));
        ui.toolButton_20->setIcon(pix);
        ui.toolButton_20->setAutoRaise(true);
}

void Mainsence::change_p_2_3(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_23->width(), ui.toolButton_23->height());
        ui.toolButton_23->setIconSize(QSize(ui.toolButton_23->width(), ui.toolButton_23->height()));
        ui.toolButton_23->setIcon(pix);
        ui.toolButton_23->setAutoRaise(true);
}

void Mainsence::change_p_3_1(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_22->width(), ui.toolButton_22->height());
        ui.toolButton_22->setIconSize(QSize(ui.toolButton_22->width(), ui.toolButton_22->height()));
        ui.toolButton_22->setIcon(pix);
        ui.toolButton_22->setAutoRaise(true);
}

void Mainsence::change_p_3_2(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_21->width(), ui.toolButton_21->height());
        ui.toolButton_21->setIconSize(QSize(ui.toolButton_21->width(), ui.toolButton_21->height()));
        ui.toolButton_21->setIcon(pix);
        ui.toolButton_21->setAutoRaise(true);
}

void Mainsence::change_p_3_3(QString image_people, QSound* sound_open)
{
        (*sound_open).play();
        QPixmap pix;
        pix.load(image_people);
        pix = pix.scaled(ui.toolButton_24->width(), ui.toolButton_24->height());
        ui.toolButton_24->setIconSize(QSize(ui.toolButton_24->width(), ui.toolButton_24->height()));
        ui.toolButton_24->setIcon(pix);
        ui.toolButton_24->setAutoRaise(true);
}

void Mainsence::succeed(QSound* sound_play, QSound* sound_main)
{
    QSound* win = new QSound(":/new/prefix1/resources1/win.wav");
    (*sound_play).stop();
    (*win).play();
    if (QMessageBox::Yes == QMessageBox::question(this, "WIN", "You are win,do you want to play again?"))
    {
        left++;
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_play).play();
    }
    else
    {
        left = 0;
        right = 0;
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_main).play();
        ui.stackedWidget->setCurrentIndex(2);
    }
}

void Mainsence::defeat(QSound* sound_play, QSound* sound_main)
{
    QSound* def = new QSound(":/new/prefix1/resources1/defeat.wav");
    (*sound_play).stop();
    (*def).play();
    if (QMessageBox::Yes == QMessageBox::question(this, "DEFEAT", "You are define,do you want to play again?"))
    {
        right++;
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*def).stop();
        (*sound_play).play();
    }
    else
    {
        left = 0;
        right = 0;
        ui.stackedWidget->setCurrentIndex(2);
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*def).stop();
        (*sound_main).play();
    }
}

void Mainsence::dogfall(QSound* sound_play,QSound* sound_main)
{
    QSound* dog = new QSound(":/new/prefix1/resources1/dogfall.wav");
    (*sound_play).stop();
    (*dog).play();
    if (QMessageBox::Yes == QMessageBox::question(this, "DOGFALL", "Nobody win,do you want to play again?"))
    {
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*dog).stop();
        (*sound_play).play();
    }
    else
    {
        left = 0;
        right = 0;
        ui.stackedWidget->setCurrentIndex(2);
        origin(":/new/prefix1/resources1/20211210113755.png");
        cp = 0;
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*dog).stop();
        (*sound_main).play();
    }
}

void Mainsence::computer_control(QSound *sound_play, QSound* sound_main)
{
    if ((number[0][0] == 1 && number[0][1] == 1 && number[0][2] == 1) || (number[1][0] == 1 && number[1][1] == 1 && number[1][2] == 1) || (number[2][0] == 1 && number[2][1] == 1 && number[2][2] == 1) || (number[0][0] == 1 && number[1][0] == 1 && number[2][0] == 1) || (number[0][1] == 1 && number[1][1] == 1 && number[2][1] == 1) || (number[0][2] == 1 && number[1][2] == 1 && number[2][2] == 1) || (number[0][0] == 1 && number[1][1] == 1 && number[2][2] == 1) || (number[0][2] == 1 && number[1][1] == 1 && number[2][0] == 1))
    {
        succeed(sound_play, sound_main);
    }
    else if ((number[0][0] == 2 && number[0][1] == 2 && number[0][2] == 2) || (number[1][0] == 2 && number[1][1] == 2 && number[1][2] == 2) || (number[2][0] == 2 && number[2][1] == 2 && number[2][2] == 2) || (number[0][0] == 2 && number[1][0] == 2 && number[2][0] == 2) || (number[0][1] == 2 && number[1][1] == 2 && number[2][1] == 2) || (number[0][2] == 2 && number[1][2] == 2 && number[2][2] == 2) || (number[0][2] == 2 && number[1][1] == 2 && number[2][0] == 2) || (number[0][0] == 2 && number[1][1] == 2 && number[2][2] == 2))
    {
        defeat(sound_play, sound_main);
    }
    else if (number[0][0] != 0 && number[0][1] != 0 && number[0][2] != 0 && number[1][0] != 0 && number[1][1] != 0 && number[1][2] != 0 && number[2][0] != 0 && number[2][1] != 0 && number[2][2] != 0)
    {
        dogfall(sound_play, sound_main);
    }
}

void Mainsence::people_pk(QSound* sound_play, QSound* sound_main)
{
    if ((number[0][0] == 3 && number[0][1] == 3 && number[0][2] == 3) || (number[1][0] == 3 && number[1][1] == 3 && number[1][2] == 3) || (number[2][0] == 3 && number[2][1] == 3 && number[2][2] == 3) || (number[0][0] == 3 && number[1][0] == 3 && number[2][0] == 3) || (number[0][1] == 3 && number[1][1] == 3 && number[2][1] == 3) || (number[0][2] == 3 && number[1][2] == 3 && number[2][2] == 3) || (number[0][0] == 3 && number[1][1] == 3 && number[2][2] == 3) || (number[0][2] == 3 && number[1][1] == 3 && number[2][0] == 3))
    {
        succeed_1(sound_play, sound_main);
    }
    else if ((number[0][0] == 4 && number[0][1] == 4 && number[0][2] == 4) || (number[1][0] == 4 && number[1][1] == 4 && number[1][2] == 4) || (number[2][0] == 4 && number[2][1] == 4 && number[2][2] == 4) || (number[0][0] == 4 && number[1][0] == 4 && number[2][0] == 4) || (number[0][1] == 4 && number[1][1] == 4 && number[2][1] == 4) || (number[0][2] == 4 && number[1][2] == 4 && number[2][2] == 4) || (number[0][2] == 4 && number[1][1] == 4 && number[2][0] == 4) || (number[0][0] == 4 && number[1][1] == 4 && number[2][2] == 4))
    {
        succeed_2(sound_play, sound_main);
    }
    else if (number[0][0] != 0 && number[0][1] != 0 && number[0][2] != 0 && number[1][0] != 0 && number[1][1] != 0 && number[1][2] != 0 && number[2][0] != 0 && number[2][1] != 0 && number[2][2] != 0)
    {
        dogfall(sound_play, sound_main);
    }
}



void Mainsence::succeed_1(QSound* sound_play, QSound* sound_main)
{
    QSound* win = new QSound(":/new/prefix1/resources1/win.wav");
    (*sound_play).stop();
    (*win).play();
    if (QMessageBox::Yes == QMessageBox::question(this, "WIN_1", "ON.1 are win,do you want to play again?"))
    {
        left++;
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_play).play();
    }
    else
    {
        left = 0;
        right = 0;
        ui.stackedWidget->setCurrentIndex(2);
        origin(":/new/prefix1/resources1/20211210113755.png");
        cp = 0;
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_main).play();
    }
}

void Mainsence::succeed_2(QSound* sound_play, QSound* sound_main)
{
    QSound* win = new QSound(":/new/prefix1/resources1/win.wav");
    (*sound_play).stop();
    (*win).play();
    if (QMessageBox::Yes == QMessageBox::question(this, "WIN_2", "ON.2 are win,do you want to play again?"))
    {
        right++;
        origin(":/new/prefix1/resources1/20211210113755.png");
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_play).play();
    }
    else
    {
        left = 0;
        right = 0;
        ui.stackedWidget->setCurrentIndex(2);
        origin(":/new/prefix1/resources1/20211210113755.png");
        cp = 0;
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                number[i][j] = 0;
        (*win).stop();
        (*sound_main).play();
    }
}