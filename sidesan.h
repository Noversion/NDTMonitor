#ifndef SIDESAN_H
#define SIDESAN_H

#include <QWidget>

class sidesan : public QWidget
{
    Q_OBJECT
public:
    explicit sidesan(QWidget *parent = nullptr);

    virtual void paintEvent(QPaintEvent *event);
signals:

public slots:
};

#endif // SIDESAN_H
