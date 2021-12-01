#include "class.h"
#include<qdialog>
#include<qmessagebox>
#include<qfiledialog>
#include<qtoolbar>
#include<qdockwidget>
#include<qtextedit>
#include<qpushbutton>
Qt_mainWindows_check::Qt_mainWindows_check(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    resize(900, 700);
    QMenuBar *bar = menuBar();
    setMenuBar(bar);
    QMenu* File = (*bar).addMenu("File");
    QMenu* Edit = (*bar).addMenu("Edit");
    QMenu* Git = (*bar).addMenu("Git");
    QAction* f2 = (*File).addAction("New");
    QAction* f1 = (*File).addAction("Open");
    (*File).addSeparator();
    QAction* f3 = (*File).addAction("Quit");
    QToolBar* tar = new QToolBar(this);
    QDockWidget* dock_1 = new QDockWidget(this);
    addDockWidget(Qt::BottomDockWidgetArea, dock_1);
    QTextEdit* edit = new QTextEdit(this);
    setCentralWidget(edit);
    addToolBar(Qt::LeftToolBarArea, tar);
    (*tar).addAction("1");
    (*tar).addAction("2");
    (*tar).addAction("3");
    (*f2).setIcon(QIcon(":/resources/20211117161738.png"));
    connect(f3, &QAction::triggered, [=]() {
        if (QMessageBox::Yes == QMessageBox::question(this, "quit", "Are you sure quit?"))
            QWidget::close();
        });
    connect(f2, &QAction::triggered, this, &QWidget::close);
    connect(f2, &QAction::triggered, [=]() {
        QDialog wnew(this);
        wnew.resize(900, 700);
        QPushButton* b1 = new QPushButton("return",&wnew);
        connect(b1, &QPushButton::clicked, &wnew, &QWidget::close);
        connect(b1, &QPushButton::clicked, [=]() {
            QDialog wre(this);
            wre.resize(900, 700);
            (wre).exec();
            
            });
   
        wnew.exec();
        });
    connect(f1, &QAction::triggered, [=]() {
        QFileDialog* fw = new QFileDialog(this);
        (*fw).show();
        (*fw).setAttribute(Qt::WA_DeleteOnClose);
        });
    }

