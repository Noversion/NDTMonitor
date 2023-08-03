#include "serversettingblk.h"
#include "ui_serversettingblk.h"

serverSettingBlk::serverSettingBlk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serverSettingBlk),
    hdDatSvr(new QTcpServer())
{
    ui->setupUi(this);
}

serverSettingBlk::~serverSettingBlk()
{
    delete ui;
}

void serverSettingBlk::on_startServerBtn_clicked()
{
    hdDatSvr->listen(QHostAddress::Any, 8888);
    connect(hdDatSvr, &QTcpServer::newConnection, this, [=]{
        hdDatThd = new myTcpServer(hdDatSvr);
        //启动子线程
        hdDatThd->start();
      });
}
