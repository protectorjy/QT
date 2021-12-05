#include "question.h"
#include <qlistwidget>
#include<qmessagebox>

question::question(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.toolButton, &QToolButton::clicked, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "Quit", "Are you sure to quit?"))
            QWidget::close();
        });
}
