#include "server.h"
FtblServer::FtblServer(){}
FtblServer::~FtblServer(){}


void FtblServer::startServer()
{
    if (this->listen(QHostAddress::Any,3334 ))
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


    socket = new QTcpSocket(this);
    socket -> setSocketDescriptor(socketDescriptor);
    connect (socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect (socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));
    qDebug()<<socketDescriptor<<"Connected";
    QDataStream stream(socket);
//    int ii = 42;
//    QString s = QString::number(ii);
    socket->write("Connect");
//    Data="sknonn";

//    stream<<Data;

//    qDebug()<<Data;

    socket->waitForReadyRead(1000);
    QByteArray Data_2 = socket->readAll();
    QString Data_3=QString(Data_2);
    int a=Data_3.toInt();
     qDebug()<<a;
}


void FtblServer::sockReady()
{

}
void FtblServer::sockDisc()
{
    qDebug()<<"Disc";
    socket->deleteLater();
}
