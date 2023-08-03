#ifndef SERVERSETTINGBLK_H
#define SERVERSETTINGBLK_H

#include <QWidget>

#include "mytcpserver.h"

namespace Ui {
class serverSettingBlk;
}

class serverSettingBlk : public QWidget
{
    Q_OBJECT

public:
    explicit serverSettingBlk(QWidget *parent = nullptr);
    ~serverSettingBlk();

private slots:
    void on_startServerBtn_clicked();

private:
    Ui::serverSettingBlk *ui;
    QTcpServer* hdDatSvr;
    myTcpServer* hdDatThd;
};

#endif // SERVERSETTINGBLK_H
