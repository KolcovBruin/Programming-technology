#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>
#include <vector>
class FtblServer: public QTcpServer
{
    Q_OBJECT
public:
    FtblServer();
    ~FtblServer();
    std::vector<QTcpSocket> socket;
    QByteArray Data;
public slots:
    void startServer();
    void incomingConnection(qintptr);
    void sockReady();
    void sockDisc();
private:
    struct field
    {
      int player[2];
    };
    struct player
    {
      QTcpSocket* socket;
      int type_game;
      int number_player;
      int size_field;
    };
};

#endif // SERVER_H
