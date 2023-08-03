#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>

class myTcpServer : public QThread
{
    Q_OBJECT
public:
    explicit myTcpServer(QTcpServer *parent);

    void run() override;

protected:
  QTcpServer *server;
  QTcpSocket *socket;
  QString rcv;

signals:

public slots:

private:
  void deleteLater(){
      //析构
  }
};

#endif // MYTCPSERVER_H
