#include "Layout_check.h"
#include<qdialog>
#include<qfiledialog>
#include<qmessagebox>

Layout_check::Layout_check(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionNew, &QAction::triggered, this, &QWidget::close);
    connect(ui.actionNew, &QAction::triggered, [=]() {
        QDialog wre(this);
        wre.resize(900, 700);
        wre.exec();
        });
    connect(ui.actionOpen, &QAction::triggered, [=]() {
        QFileDialog::getOpenFileName(this, "Open", "C:\\Users\\Yao_xr\\Desktop");
        });
    connect(ui.actionQuit, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure quit?"))
            QWidget::close();
        });
}
