#include "menubar.h"
#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QTreeView>
#include <QFileSystemModel>
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QInputDialog>
#include <QMessageBox>
#include <QModelIndex>
#include <QWidget>

menuBar::menuBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    m_menuBar = new QMenuBar(parent);

//文件
    QMenu *fileMenu = m_menuBar->addMenu("File");
    // 添加创建文件的按钮
    QAction *createAction = fileMenu->addAction("Create");
    connect(createAction, &QAction::triggered, this, &menuBar::createFile);

    // 添加删除文件的按钮
    QAction *deleteAction = fileMenu->addAction("Delete");
    connect(deleteAction, &QAction::triggered, this, &menuBar::deleteFile);

    // 添加重命名文件的按钮
    QAction *renameAction = fileMenu->addAction("Rename");
    connect(renameAction, &QAction::triggered, this, &menuBar::renameFile);

//设定
    QMenu *settingMenu = m_menuBar->addMenu("setting");
    // 添加Mode按钮
    QAction *modeAction = settingMenu->addAction("Mode");
    connect(createAction, &QAction::triggered, this, &menuBar::modeSetting);

    // 添加Transducer Position按钮
    QAction *transducerPositionAction = settingMenu->addAction("Transducer Position");
    connect(transducerPositionAction, &QAction::triggered, this, &menuBar::transducerPositionSetting);

    // 添加Unit Setting按钮
    QAction *unitAction = settingMenu->addAction("Unit Setting");
    connect(unitAction , &QAction::triggered, this, &menuBar::unitSetting);

    //
    QAction *nmeaAction = settingMenu->addAction("NMEA Setting");
    connect(nmeaAction, &QAction::triggered, this, &menuBar::NMEASetting);

    QAction *m_Separator = settingMenu->addAction("");
    m_Separator->setSeparator(true); // 设置为分隔线

    // 添加Unit Setting按钮
    QAction *saveAsDefultAction = settingMenu->addAction("Save as defult");
    connect(saveAsDefultAction, &QAction::triggered, this, &menuBar::saveAsDefult);

    //
    QAction *loadWithDefultAction = settingMenu->addAction("Load with defult");
    connect(loadWithDefultAction, &QAction::triggered, this, &menuBar::loadWithDefult);

}

menuBar::~menuBar() {
    delete ui;
}

void menuBar::createFile() {
    // 获取当前所在目录的路径
    QModelIndex index = fileTreeView->currentIndex();
    QString path = static_cast<QFileSystemModel*>(fileTreeView->model())->filePath(index);

    // 弹出文件名输入框，创建文件
    QString fileName = QInputDialog::getText(this, "Create a file", "File name:");
    QFile file(path + QDir::separator() + fileName);
    if (file.open(QIODevice::WriteOnly)) {
        file.close();
    }
}

void menuBar::deleteFile() {
    // 获取选中文件的路径
    QModelIndex index = fileTreeView->currentIndex();
    QString path = static_cast<QFileSystemModel*>(fileTreeView->model())->filePath(index);

    // 删除文件
    if (!QFile::remove(path)) {
        QMessageBox::critical(this, "Error", "Failed to delete file");
    }
}

void menuBar::renameFile() {
    // 获取选中文件的路径
    QModelIndex index = fileTreeView->currentIndex();
    QString path = static_cast<QFileSystemModel*>(fileTreeView->model())->filePath(index);

    // 弹出文件名输入框，重命名文件
    QString newName = QInputDialog::getText(this, "Rename file", "New name:", QLineEdit::Normal, path.section(QDir::separator(), -1));
    QString newPath = path.section(QDir::separator(), 0, -2) + QDir::separator() + newName;
    if (!QFile::rename(path, newPath)) {
        QMessageBox::critical(this, "Error", "Failed to rename file");
    }
}

void menuBar::modeSetting(){

}

void menuBar::transducerPositionSetting(){

}

void menuBar::unitSetting(){

}

void menuBar::NMEASetting(){

}

void menuBar::saveAsDefult(){
    
}

void menuBar::loadWithDefult(){
    
}

