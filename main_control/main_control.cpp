#include "main_control.h"
#include<qmessagebox>
#include<qfiledialog>
#include<qdialog>
#include<qstackedwidget>

main_control::main_control(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionquit, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
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
    connect(ui.actionhelp,&QAction::triggered,[=]() {
        QMessageBox::information(this, "Help", "Play a game!");
        });
    connect(ui.actionabout, &QAction::triggered, [=]() {
        QMessageBox::information(this, "About", "This is Yaoxr's game!");
        });
    ui.toolButton->setStyleSheet("background-color: rgb(175,238,238)");
}

