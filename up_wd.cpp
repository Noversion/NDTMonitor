#include "up_wd.h"
#include "ui_up_wd.h"

up_wd::up_wd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::up_wd)
{
    ui->setupUi(this);
}

up_wd::~up_wd()
{
    delete ui;
}

void up_wd::on_startServerBtn_clicked()
{

}
