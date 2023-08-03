#include "sidesan.h"
#include <QPainter>
#include <QBitmap>
#include <QImage>

sidesan::sidesan(QWidget *parent) : QWidget(parent)
{

}

void sidesan::paintEvent(QPaintEvent *event){
    QPainter *painter = new QPainter(this);
    //划线
    painter->drawLine(0,0,100,100);
    painter->setPen(Qt::red);
    //painter->setPen(Qt::DotLine);
    painter->drawRect(100,100,100,200);
    QPoint p;
   // p.x()=
    painter->drawEllipse(100,200,200,200);
    painter->drawEllipse(400,500,300,200);
}
