#include "main_control.h"
#include<qmessagebox>
#include<qfiledialog>
#include<qdialog>
#include<qstackedwidget>
#include<qlabel>

main_control::main_control(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionquit, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            if (QMessageBox::Ok == QMessageBox::information(this, "Thank", "Thank you playing yaoxr's game!"))
                QWidget::close();
        });
    connect(ui.actionnew, &QAction::triggered, [=]() {
        QDialog* win = new QDialog(this);
        (*win).resize(900, 700);
        (*win).show();
        (*win).setAttribute(Qt::WA_DeleteOnClose);
        });
    connect(ui.actionopen, &QAction::triggered, [=]() {
        QFileDialog::getOpenFileName(this, "OPEN", "C:\\Users\\Yao_xr\\Desktop");
        });
    connect(ui.actionhelp, &QAction::triggered, [=]() {
        QMessageBox::information(this, "Help", "Play a game!");
        });
    connect(ui.actionabout, &QAction::triggered, [=]() {
        QMessageBox::information(this, "About", "This is Yaoxr's game!");
        });
    ui.toolButton->setStyleSheet("background-color: rgb(175,238,238)");
    ui.toolButton_2->setStyleSheet("background-color: rgb(175,238,238)");
    connect(ui.toolButton_2, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            if (QMessageBox::Ok == QMessageBox::information(this, "Thank", "Thank you playing yaoxr's game!"))
                QWidget::close();
        });
    ui.stackedWidget->setCurrentIndex(0);
    connect(ui.toolButton, &QToolButton::clicked, [=]() {
        ui.stackedWidget->setCurrentIndex(1);
        });
    ui.pushButton->setStyleSheet("background-color: rgb(255,0,0)");
    connect(ui.actionreturn, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return main menu?"))
            ui.stackedWidget->setCurrentIndex(0);
        });
    connect(ui.pushButton, &QPushButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Return", "Are you sure to return main menu?"))
            ui.stackedWidget->setCurrentIndex(0);
        });
    ui.toolButton_3->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_4->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_5->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_6->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_7->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_8->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_9->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_10->setStyleSheet("background-color: rgb(51,255,51)");
    ui.toolButton_11->setStyleSheet("background-color: rgb(51,255,51)");
    //ui.->setPixmap(QPixmap(": / resources / 20211118140239.png"));
}

