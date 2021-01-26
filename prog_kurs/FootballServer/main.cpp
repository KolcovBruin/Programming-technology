#include <QCoreApplication>
#include "server.h"
#include "field.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FtblServer Server;
    Server.startServer();
   Field Ass;



    return a.exec();
}
