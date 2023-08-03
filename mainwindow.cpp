#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menubar.h"

#include <QApplication>
#include <QWidget>
#include <QGraphicsDropShadowEffect>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    class menuBar* m_menuBar = new class menuBar(this);
    setMenuBar(m_menuBar->m_menuBar);



    setWindowTitle("NDTMonitor");
    setMinimumSize(600, 400);

}

MainWindow::~MainWindow()
{
    delete ui;
}
