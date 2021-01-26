#include "server.h"
FtblServer::FtblServer(){}
FtblServer::~FtblServer(){}


void FtblServer::startServer()
{
    if (this->listen(QHostAddress::Any,3333))
    {
        qDebug()<<"Listening";
    }
    else
    {
        qDebug()<<"Not Listening";
    }
}


void FtblServer::incomingConnection(qintptr socketDescriptor)
{
    //написать комменты что здесь происходит
    socket = new QTcpSocket(this);
    socket -> setSocketDescriptor(socketDescriptor);
    connect (socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect (socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));
    qDebug()<<socketDescriptor<<"Connected";
    QDataStream stream(socket);
    Data="Peredacha";
    stream<<Data;
    qDebug()<<"Status";

}


void FtblServer::sockReady()
{

}
void FtblServer::sockDisc()
{
    qDebug()<<"Disc";
    socket->deleteLater();
}
