#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>
QString image = ":/new/prefix1/resources1/20211208165718.png";
QString image_people = ":/new/prefix1/resources1/20211208191508.png";
QString image_computer = ":/new/prefix1/resources1/20211208191706.png";

void Mainsence::algorithm()        //Ëã·¨
{
    //µçÄÔ
    if (number[0][0] == 2 && number[0][1] == 2 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    else if (number[0][0] == 2 && number[0][2] == 2 && number[0][1] != 1 && number[0][1] != 2)
        Change1_2(image_computer);
    else if (number[0][1] == 2 && number[0][2] == 2 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[1][0] == 2 && number[1][1] == 2 && number[1][2] != 1 && number[1][2] != 2)
        Change2_3(image_computer);
    else if (number[1][0] == 2 && number[1][2] == 2 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 2 && number[1][2] == 2 && number[1][0] != 1 && number[1][0] != 2)
        Change2_1(image_computer);
    else if (number[2][0] == 2 && number[2][1] == 2 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[2][0] == 2 && number[2][2] == 2 && number[2][1] != 1 && number[2][1] != 2)
        Change3_2(image_computer);
    else if (number[2][1] == 2 && number[2][2] == 2 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][0] == 2 && number[1][0] == 2 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][0] == 2 && number[2][0] == 2 && number[1][0] != 1 && number[1][0] != 2)
        Change2_1(image_computer);
    else if (number[1][0] == 2 && number[2][0] == 2 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[0][1] == 2 && number[1][1] == 2 && number[2][1] != 1 && number[2][1] != 2)
        Change3_2(image_computer);
    else if (number[0][1] == 2 && number[2][1] == 2 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 2 && number[2][1] == 2 && number[0][1] != 1 && number[0][1] != 2)
        Change1_2(image_computer);
    else if (number[0][2] == 2 && number[1][2] == 2 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[0][2] == 2 && number[2][2] == 2 && number[1][2] != 1 && number[1][2] != 2)
        Change2_3(image_computer);
    else if (number[1][2] == 2 && number[2][2] == 2 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    else if (number[0][0] == 2 && number[1][1] == 2 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[0][0] == 2 && number[2][2] == 2 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 2 && number[2][2] == 2 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[0][2] == 2 && number[1][1] == 2 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][2] == 2 && number[2][0] == 2 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 2 && number[2][0] == 2 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    //Íæ¼Ò
    else if (number[0][0] == 1 && number[0][1] == 1 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    else if (number[0][0] == 1 && number[0][2] == 1 && number[0][1] != 1 && number[0][1] != 2)
        Change1_2(image_computer);
    else if (number[0][1] == 1 && number[0][2] == 1 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[1][0] == 1 && number[1][1] == 1 && number[1][2] != 1 && number[1][2] != 2)
        Change2_3(image_computer);
    else if (number[1][0] == 1 && number[1][2] == 1 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 1 && number[1][2] == 1 && number[1][0] != 1 && number[1][0] != 2)
        Change2_1(image_computer);
    else if (number[2][0] == 1 && number[2][1] == 1 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[2][0] == 1 && number[2][2] == 1 && number[2][1] != 1 && number[2][1] != 2)
        Change3_2(image_computer);
    else if (number[2][1] == 1 && number[2][2] == 1 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][0] == 1 && number[1][0] == 1 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][0] == 1 && number[2][0] == 1 && number[1][0] != 1 && number[1][0] != 2)
        Change2_1(image_computer);
    else if (number[1][0] == 1 && number[2][0] == 1 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[0][1] == 1 && number[1][1] == 1 && number[2][1] != 1 && number[2][1] != 2)
        Change3_2(image_computer);
    else if (number[0][1] == 1 && number[2][1] == 1 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 1 && number[2][1] == 1 && number[0][1] != 1 && number[0][1] != 2)
        Change1_2(image_computer);
    else if (number[0][2] == 1 && number[1][2] == 1 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[0][2] == 1 && number[2][2] == 1 && number[1][2] != 1 && number[1][2] != 2)
        Change2_3(image_computer);
    else if (number[1][2] == 1 && number[2][2] == 1 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    else if (number[0][0] == 1 && number[1][1] == 1 && number[2][2] != 1 && number[2][2] != 2)
        Change3_3(image_computer);
    else if (number[0][0] == 1 && number[2][2] == 1 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 1 && number[2][2] == 1 && number[0][0] != 1 && number[0][0] != 2)
        Change1_1(image_computer);
    else if (number[0][2] == 1 && number[1][1] == 1 && number[2][0] != 1 && number[2][0] != 2)
        Change3_1(image_computer);
    else if (number[0][2] == 1 && number[2][0] == 1 && number[1][1] != 1 && number[1][1] != 2)
        Change2_2(image_computer);
    else if (number[1][1] == 1 && number[2][0] == 1 && number[0][2] != 1 && number[0][2] != 2)
        Change1_3(image_computer);
    else
    {
        Change3_1(image_computer);
        if (number[1][1] != 1)
        {
            Change1_1(image_computer);
            Change1_3(image_computer);
            Change1_2(image_computer);
            Change2_1(image_computer);
            Change2_2(image_computer);
            Change2_3(image_computer);
            Change3_2(image_computer);
            Change3_3(image_computer);
        }
        else
        {
            Change1_3(image_computer);
            Change1_1(image_computer);
            Change1_2(image_computer);
            Change2_1(image_computer);
            Change2_2(image_computer);
            Change2_3(image_computer);
            Change3_2(image_computer);
            Change3_3(image_computer);
        }
    }
}
