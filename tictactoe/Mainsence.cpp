#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>
#include <qmovie>
#include <QtMultimedia/qsound>
#include <QSplashScreen>
#include<qlistwidget>
using namespace std;

Mainsence::Mainsence(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.stackedWidget->setCurrentIndex(0);
    QString image = ":/new/prefix1/resources1/20211210113755.png";
    QString image_people = ":/new/prefix1/resources1/20211210114005.png";
    QString image_computer = ":/new/prefix1/resources1/20211210113923.png";
    QString movie_1 = ":/new/prefix1/resources1/d379db500d6aed2e40a6fe5eaff0a78b.gif";
    QString movie_2 = ":/new/prefix1/resources1/632fad1b71974ebb51560467f58b4db8.gif";
    QString movie_3 = ":/new/prefix1/resources1/453b76819f7d80bc76eba4198c3d1067.gif";
    QString movie_4 = ":/new/prefix1/resources1/8ec2e73a6dc82fa05bdb9bbeee213379.jpeg";
    QMovie* mov_1 = new QMovie(movie_3);
    (*mov_1).setScaledSize(QSize(ui.label_2->width(), ui.label_2->height()));
    ui.label_2->setMovie(mov_1);
    (*mov_1).start();
    QMovie* mov_2 = new QMovie(movie_3);
    (*mov_2).setScaledSize(QSize(ui.label_4->width(), ui.label_4->height()));
    ui.label_4->setMovie(mov_2);
    (*mov_2).start();
    QMovie* mov_3 = new QMovie(movie_4);
    (*mov_3).setScaledSize(QSize(ui.label_10->width(), ui.label_10->height()));
    ui.label_10->setMovie(mov_3);
    (*mov_3).start();
    ui.label_3->setPixmap(QPixmap(":/new/prefix1/resources1/20211205233922.png"));
    ui.label_5->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_6->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_7->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_8->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_9->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_10->setPixmap(QPixmap(":/new/prefix1/resources1/pk.png"));
    ui.label_11->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_12->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_13->setPixmap(QPixmap(":/new/prefix1/resources1/pk.png"));
    ui.label_14->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_16->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_17->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_18->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_19->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_21->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    ui.label_22->setPixmap(QPixmap(":/new/prefix1/resources1/20211210114950.png"));
    
    QSound* sound_main = new QSound(":/new/prefix1/resources1/main.wav");
    QSound* sound_play = new QSound(":/new/prefix1/resources1/game.wav");
    QSound* sound_open = new QSound(":/new/prefix1/resources1/open.wav");
    (*sound_main).play();
    (*sound_main).setLoops(-1);
    

    this->setFixedSize(900, 700);
    this->setWindowIcon(QPixmap(":/new/prefix1/resources1/20211118140239.png"));
   
    connect(ui.actionquit, &QAction::triggered, [=]() {
        if(QMessageBox::Yes==QMessageBox::question(this,"Quit","Are you sure to quit?"))
            if(QMessageBox::Ok==QMessageBox::information(this,"Quit","Thans play Zhangjy's game!"))
            {
                QWidget::close();
            }
        });
    connect(ui.actionhelp, &QAction::triggered, [=]() {
        QMessageBox::information(this, "Help", "Click on the icon to make a line for victory!");
        });
    connect(ui.actionabout, &QAction::triggered, [=]() {
        QMessageBox::information(this, "About", "This is Zhangjy's game!");
        });
    ui.label->setPixmap(QPixmap(":/new/prefix1/resources1/20211205233922.png"));
    connect(ui.toolButton, &QToolButton::clicked, [=]() {
        ui.stackedWidget->setCurrentIndex(2);
        });
    connect(ui.toolButton_6, &QToolButton::clicked, [=]() {
        QSplashScreen* pc = new QSplashScreen;
        (*pc).setPixmap(QPixmap(":/new/prefix1/resources1/20211210201212.png"));
        (*pc).show();
        for (int i = 0; i < 3000; i++)
        {
            (*pc).repaint();
        }
        ui.stackedWidget->setCurrentIndex(1);
        delete pc;
        (*sound_main).stop();
        (*sound_play).play();
        (*sound_play).setLoops(-1);
        });
    connect(ui.toolButton_7, &QToolButton::clicked, [=]() {
        cp = 1;
        QSplashScreen* pp = new QSplashScreen;
        (*pp).setPixmap(QPixmap(":/new/prefix1/resources1/20211210201212.png"));
        (*pp).show();
        for (int i = 0; i < 3000; i++)
        {
            (*pp).repaint();
        }
        ui.stackedWidget->setCurrentIndex(3);
        delete pp;
        (*sound_main).stop();
        (*sound_play).play();
        (*sound_play).setLoops(-1);
        });
    connect(ui.toolButton_2, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            if (QMessageBox::Ok == QMessageBox::information(this, "Quit", "Thans play Zhangjy's game!"))
            {
                QWidget::close();
            }
        });
    connect(ui.actionreturn, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return Main?"))
        {
            ui.stackedWidget->setCurrentIndex(0);
            cp = 0;
            origin(image);
            for (int i = 0; i <= 2; i++)
                for (int j = 0; j <= 2; j++)
                    number[i][j] = 0;
            (*sound_play).stop();
            (*sound_main).play();
            (*sound_main).setLoops(-1);
        }
        });
    connect(ui.toolButton_3, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return?"))
        {
            ui.stackedWidget->setCurrentIndex(2);
            origin(image);
            for (int i = 0; i <= 2; i++)
                for (int j = 0; j <= 2; j++)
                    number[i][j] = 0;
            (*sound_play).stop();
            (*sound_main).play();
            (*sound_main).setLoops(-1);
        }
        });
    connect(ui.toolButton_25, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return?"))
        {
            ui.stackedWidget->setCurrentIndex(2);
            origin(image);
            cp = 0;
            for (int i = 0; i <= 2; i++)
                for (int j = 0; j <= 2; j++)
                    number[i][j] = 0;
            (*sound_play).stop();
            (*sound_main).play();
            (*sound_main).setLoops(-1);
        }
        });
    connect(ui.toolButton_8, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return Main?"))
        {
            ui.stackedWidget->setCurrentIndex(0);
        }
        });
    origin(image);
        connect(ui.toolButton_4, &QToolButton::clicked, [=]() {
            change1_1(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_5, &QToolButton::clicked, [=]() {
            change1_2(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_11, &QToolButton::clicked, [=]() {
            change1_3(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_13, &QToolButton::clicked, [=]() {
            change2_1(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_14, &QToolButton::clicked, [=]() {
            change2_2(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_12, &QToolButton::clicked, [=]() {
            change2_3(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_16, &QToolButton::clicked, [=]() {
            change3_1(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_17, &QToolButton::clicked, [=]() {
            change3_2(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_15, &QToolButton::clicked, [=]() {
            change3_3(image_people, sound_open);
            computer_control(sound_play, sound_main);
            algorithm();
            computer_control(sound_play, sound_main);
            });
        connect(ui.toolButton_9, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[0][0] != 2 && number[0][0] != 3)
                {
                    change_p_1_1(image_people, sound_open);
                    cp = 2;
                    number[0][0] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[0][0] != 4 && number[0][0] != 3)
                {
                    change_p_1_1(image_computer, sound_open);
                    cp = 1;
                    number[0][0] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_10, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[0][1] != 3 && number[0][1] != 4)
                {
                    change_p_1_2(image_people, sound_open);
                    cp = 2;
                    number[0][1] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[0][1] != 4 && number[0][1] != 3)
                {
                    change_p_1_2(image_computer, sound_open);
                    cp = 1;
                    number[0][1] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_18, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[0][2] != 4 && number[0][2] != 3)
                {
                    change_p_1_3(image_people, sound_open);
                    cp = 2;
                    number[0][2] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[0][2] != 4 && number[0][2] != 3)
                {
                    change_p_1_3(image_computer, sound_open);
                    cp = 1;
                    number[0][2] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_19, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[1][0] != 3 && number[1][0] != 4)
                {
                    change_p_2_1(image_people, sound_open);
                    cp = 2;
                    number[1][0] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[1][0] != 3 && number[1][0] != 4)
                {
                    change_p_2_1(image_computer, sound_open);
                    cp = 1;
                    number[1][0] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_20, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[1][1] != 3 && number[1][1] != 4)
                {
                    change_p_2_2(image_people, sound_open);
                    cp = 2;
                    number[1][1] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[1][1] != 3 && number[1][1] != 4)
                {
                    change_p_2_2(image_computer, sound_open);
                    cp = 1;
                    number[1][1] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_23, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[1][2] != 3 && number[1][2] != 4)
                {
                    change_p_2_3(image_people, sound_open);
                    cp = 2;
                    number[1][2] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[1][2] != 3 && number[1][2] != 4)
                {
                    change_p_2_3(image_computer, sound_open);
                    cp = 1;
                    number[1][2] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_22, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[2][0] != 3 && number[2][0] != 4)
                {
                    change_p_3_1(image_people, sound_open);
                    cp = 2;
                    number[2][0] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[2][0] != 3 && number[2][0] != 4)
                {
                    change_p_3_1(image_computer, sound_open);
                    cp = 1;
                    number[2][0] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_21, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[2][1] != 3 && number[2][1] != 4)
                {
                    change_p_3_2(image_people, sound_open);
                    cp = 2;
                    number[2][1] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[2][1] != 3 && number[2][1] != 4)
                {
                    change_p_3_2(image_computer, sound_open);
                    cp = 1;
                    number[2][1] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
        connect(ui.toolButton_24, &QToolButton::clicked, [=]() {
            if (cp == 1)
            {
                if (number[2][2] != 3 && number[2][2] != 4)
                {
                    change_p_3_3(image_people, sound_open);
                    cp = 2;
                    number[2][2] = 3;
                    people_pk(sound_play, sound_main);
                }
            }
            else if (cp == 2)
            {
                if (number[2][2] != 3 && number[2][2] != 4)
                {
                    change_p_3_3(image_computer, sound_open);
                    cp = 1;
                    number[2][2] = 4;
                    people_pk(sound_play, sound_main);
                }
            }
            });
}