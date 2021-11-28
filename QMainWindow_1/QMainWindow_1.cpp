#include "QMainWindow_1.h"
#include<QMenubar>
#include<QToolBar>
#include<QDebug>
#include<qpushbutton>

QMainWindow_1::QMainWindow_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    resize(900, 700);
    QMenuBar* bar = menuBar();
    setMenuBar(bar);
    QMenu * file = (*bar).addMenu("File");
    QMenu * edit = (*bar).addMenu("edit");
    QAction* t1 = (*file).addAction("New");
    QAction* t2 = (*file).addAction("Open");
    (*edit).addAction("Return");
    QToolBar* tar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,tar);
    (*tar).addAction(t1);
    (*tar).addSeparator();
    (*tar).addAction(t2);
    QPushButton* b1 = new QPushButton("fuck", this);
    (*tar).addWidget(b1);
}
