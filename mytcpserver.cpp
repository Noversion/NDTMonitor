﻿#include "mytcpserver.h"

#include <QDebug>
#include <QThread>

myTcpServer::myTcpServer(QTcpServer *parent)
{
    server = parent;
}

void myTcpServer::run(){
    qDebug()<<QStringLiteral("子线程地址：")<<QThread::currentThreadId();
    socket = new QTcpSocket();
    socket = server->nextPendingConnection();

    connect(socket, &QTcpSocket::readyRead, [=](){
        qDebug()<< "1";
              rcv = socket->readAll();
              qDebug()<< "receive:" << rcv ;});

    connect(socket, &QTcpSocket::disconnected, [=](){
        qDebug()<<"Disconnected";
    });
    exec();
}
