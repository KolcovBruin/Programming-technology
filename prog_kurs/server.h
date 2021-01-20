#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>
class FtblServer: public QTcpServer
{
    Q_OBJECT
public:
    FtblServer();
    ~FtblServer();
    QTcpSocket* socket;
    QByteArray Data;
public slots:
    void startServer();
    void incomingConnection(qintptr);
    void sockReady();
    void sockDisc();
};

#endif // SERVER_H
