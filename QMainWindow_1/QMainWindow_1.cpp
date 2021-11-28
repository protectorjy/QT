#include "QMainWindow_1.h"
#include<QMenubar>
#include<QToolBar>
#include<QDebug>
#include<qpushbutton>
#include<qstatusbar>
#include<qlabel>
#include<qdockwidget>
#include<qtextedit>

QMainWindow_1::QMainWindow_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    resize(900, 700);
    QMenuBar* mar = menuBar();
    setMenuBar(mar);
    QMenu* file = (*mar).addMenu("File");
    QMenu* edit = (*mar).addMenu("Edit");
    QMenu* view = (*mar).addMenu("View");
    QMenu* Git = (*mar).addMenu("Git");
    QMenu* test = (*mar).addMenu("Test");
    (*file).addAction("New");
    (*file).addAction("Open");
    (*file).addAction("Clone");
    (*file).addSeparator();
    (*file).addAction("Quit");
    (*edit).addAction("Return");
    (*edit).addSeparator();
    (*edit).addAction("Copy");
    (*edit).addAction("Stick");
    (*view).addAction("Out");
    (*Git).addAction("Clone in");
    (*Git).addAction("Clone out");
    (*Git).addAction("Synchronization");
    (*test).addAction("Tese");
    (*test).addAction("Run");
    QToolBar* tar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,tar);
    (*tar).addAction("1");
    (*tar).addAction("2");
    (*tar).addAction("3");
    (*tar).addAction("4");
    (*tar).addAction("5");
    QStatusBar* sar = statusBar();
    setStatusBar(sar);
    QLabel* lable = new QLabel("warning", this);
    (*sar).addWidget(lable);
    QDockWidget* dock = new QDockWidget("window_1", this);
    addDockWidget(Qt::BottomDockWidgetArea, dock);
    QTextEdit* text = new QTextEdit(this);
    setCentralWidget(text);
}
