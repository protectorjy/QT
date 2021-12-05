#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT_tree.h"

class QT_tree : public QWidget
{
    Q_OBJECT

public:
    QT_tree(QWidget *parent = Q_NULLPTR);

private:
    Ui::QT_treeClass ui;
};
