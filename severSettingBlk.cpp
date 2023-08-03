include "severview.h"
#include "ui_severview.h"

severView::severView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::severView)
{
    ui->setupUi(this);
}

severView::~severView()
{
    delete ui;
}
