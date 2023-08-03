#ifndef MENUBAR_H
#define MENUBAR_H

#include "ui_mainwindow.h"

#include <QWidget>
#include <QMainWindow>
#include <QTreeView>

class menuBar : public QWidget
{
    Q_OBJECT
public:
    explicit menuBar(QWidget *parent = nullptr);
    ~menuBar();
    QTreeView *fileTreeView;
    QMenuBar* m_menuBar;

private:

    void createFile();
    void deleteFile();
    void renameFile();

    void modeSetting();
    void transducerPositionSetting();
    void unitSetting();
    void NMEASetting();
    void saveAsDefult();
    void loadWithDefult();

    Ui::MainWindow *ui;

signals:

public slots:
private slots:

};

#endif // MENUBAR_H
