#include "control.h"
#include<qlistwidget>
#include<qmessagebox>

control::control(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.toolButton, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            QWidget::close();
        });
    QListWidgetItem* item_1 = new QListWidgetItem("Text");
    ui.listWidget->addItem(item_1);
    (*item_1).setTextAlignment(Qt::AlignHCenter);
    QStringList list;
    list << "Please fill in the questionnaire on the left before April 12, 2022" << "Fill out an electronic version and submit the hard copy to 993077846@qq.com" << "For details, please add group :655526416";
    ui.listWidget->addItems(list);
    connect(ui.toolButton_2, &QToolButton::clicked, [=]() {
        QMessageBox::question(this, "Pull", "Are you sure to pull?");
        });
}
