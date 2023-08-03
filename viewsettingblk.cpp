#include "viewsettingblk.h"
#include "ui_viewsettingblk.h"

viewSettingBlk::viewSettingBlk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewSettingBlk)
{
    ui->setupUi(this);
}

viewSettingBlk::~viewSettingBlk()
{
    delete ui;
}
