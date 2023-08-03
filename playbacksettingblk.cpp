#include "playbacksettingblk.h"
#include "ui_playbacksettingblk.h"

playbackSettingBlk::playbackSettingBlk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playbackSettingBlk)
{
    ui->setupUi(this);
}

playbackSettingBlk::~playbackSettingBlk()
{
    delete ui;
}
