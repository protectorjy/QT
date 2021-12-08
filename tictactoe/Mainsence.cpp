#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>

Mainsence::Mainsence(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.stackedWidget->setCurrentIndex(0);
    QString image = ":/new/prefix1/resources1/20211208165718.png";
    QString image_people = ":/new/prefix1/resources1/20211208191508.png";
    QString image_computer = ":/new/prefix1/resources1/20211208191706.png";
    this->setFixedSize(900, 700);
    this->setWindowIcon(QPixmap(":/new/prefix1/resources1/20211118140239.png"));
    connect(ui.actionquit, &QAction::triggered, [=]() {
        if(QMessageBox::Yes==QMessageBox::question(this,"Quit","Are you sure to quit?"))
            if(QMessageBox::Ok==QMessageBox::information(this,"Quit","Thans play yaoxr's game!"))
                QWidget::close();
        });
    connect(ui.actionhelp, &QAction::triggered, [=]() {
        QMessageBox::information(this, "Help", "Click on the icon to make a line for victory!");
        });
    connect(ui.actionabout, &QAction::triggered, [=]() {
        QMessageBox::information(this, "About", "This is Yaoxr's game!");
        });
    ui.label->setPixmap(QPixmap(":/new/prefix1/resources1/20211205233922.png"));
    connect(ui.toolButton, &QToolButton::clicked, [=]() {
        ui.stackedWidget->setCurrentIndex(1);
        });
    connect(ui.toolButton_2, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            if (QMessageBox::Ok == QMessageBox::information(this, "Quit", "Thans play yaoxr's game!"))
                QWidget::close();
        });
    connect(ui.actionreturn, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return?"))
        {
            ui.stackedWidget->setCurrentIndex(0);
            origin(image);
            for (int i = 0; i <= 2; i++)
                for (int j = 0; j <= 2; j++)
                    number[i][j] = 0;
        }
        });
    connect(ui.toolButton_3, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return?"))
        {
            ui.stackedWidget->setCurrentIndex(0);
            origin(image);
            for (int i = 0; i <= 2; i++)
                for (int j = 0; j <= 2; j++)
                    number[i][j] = 0;
        }
        });
    origin(image);
    connect(ui.toolButton_4, &QToolButton::clicked, [=]() {
        change1_1(image_people);
        computer_control();
        });
    connect(ui.toolButton_5, &QToolButton::clicked, [=]() {
        change1_2(image_people);
        computer_control();
        });
    connect(ui.toolButton_11, &QToolButton::clicked, [=]() {
        change1_3(image_people);
        computer_control(); 
        });
    connect(ui.toolButton_13, &QToolButton::clicked, [=]() {
        change2_1(image_people);
        computer_control();
        });
    connect(ui.toolButton_14, &QToolButton::clicked, [=]() {
        change2_2(image_people);
        computer_control();
        });
    connect(ui.toolButton_12, &QToolButton::clicked, [=]() {
        change2_3(image_people);
        computer_control();
        });
    connect(ui.toolButton_16, &QToolButton::clicked, [=]() {
        change3_1(image_people);
        computer_control();
        });
    connect(ui.toolButton_17, &QToolButton::clicked, [=]() {
        change3_2(image_people);
        computer_control();
        });
    connect(ui.toolButton_15, &QToolButton::clicked, [=]() {
        change3_3(image_people);
        computer_control();
        });
}
