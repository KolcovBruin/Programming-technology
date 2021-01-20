#include <QCoreApplication>
#include "server.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FtblServer Server;
    Server.startServer();


    return a.exec();
}
