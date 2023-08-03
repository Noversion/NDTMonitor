#include "dlg.h"
#include "ui_dlg.h"

dlg::dlg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dlg)
{
    ui->setupUi(this);
}

dlg::~dlg()
{
    delete ui;
}
