#include "Mainsence.h"
#include <qmessagebox>
#include <qstackedwidget>
#include <qicon>

Mainsence::Mainsence(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.stackedWidget->setCurrentIndex(0);
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
            ui.stackedWidget->setCurrentIndex(0);
        });
    connect(ui.toolButton_3, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return?"))
            ui.stackedWidget->setCurrentIndex(0);
        });
    QString image = ":/new/prefix1/resources1/20211208133644.png";
    QPixmap pix;
    pix.load(image);
    pix = pix.scaled(ui.toolButton_4->width(), ui.toolButton_4->height());
    ui.toolButton_4->setIconSize(QSize(ui.toolButton_4->width(), ui.toolButton_4->height()));
    ui.toolButton_4->setIcon(pix);
    ui.toolButton_4->setAutoRaise(true);
}
