#include "QMainWindow_1.h"
#include<QMenubar>
#include<QToolBar>
#include<QDebug>
#include<qpushbutton>
#include<qstatusbar>
#include<qlabel>
#include<qdockwidget>
#include<qtextedit>
#include<qdialog>
#include<qfiledialog>
#include<qmessagebox>

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
    QAction* a1 = (*file).addAction("New");
    QAction* a2 = (*file).addAction("Open");
    QAction* a3 = (*file).addAction("Clone");
    (*file).addSeparator();
    QAction* a4 = (*file).addAction("Quit");
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
    (*a1).setIcon(QIcon(":/resources/20211117161738.ico"));
    connect(a1, &QAction::triggered, [=]() {
        QDialog* dlg_1 = new QDialog(this);
        (*dlg_1).resize(600, 400);
        (*dlg_1).show();
        (*dlg_1).setAttribute(Qt::WA_DeleteOnClose);
        });
    connect(a2, &QAction::triggered, [=]() {
         QFileDialog dlg_2(this);
        (dlg_2).resize(500, 300);
        //QPushButton* b1 = new QPushButton("play", dlg);
        
        (dlg_2).exec();

        });
    connect(a3, &QAction::triggered, [=]() {
        QMessageBox::critical(this,"crit","error");
        });
    connect(a4, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "imfo", "Are you sure quit?"))
            QWidget::close();
        resize(100, 80);
        });
}
