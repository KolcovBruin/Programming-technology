#include "clientwindow.h"
#include "ui_clientwindow.h"

ClientWindow::ClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    scene=new Fields();
    rectangle =new Rectang();
   // Fields s;

    ui->graphicsView->setScene(scene);
    scene->addItem(rectangle);   // Добавляем на сцену треугольник
    rectangle->setPos(-50,-50);
    scene->addLine(-250,0,250,0,QPen(Qt::black));   // Добавляем горизонтальную линию через центр
    scene->addLine(0,-250,0,250,QPen(Qt::black));

    socket=new QTcpSocket(this);
    connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket,SIGNAL(disconnected),this,SLOT(sockDisc()));


}

ClientWindow::~ClientWindow()
{
    delete ui;
}


void ClientWindow::on_pushButton_clicked()
{
 socket->connectToHost("127.0.0.1",3334);
}
void ClientWindow::sockDisc()
{
socket->deleteLater();
}
void ClientWindow::sockReady()
{
if (socket->waitForConnected(500))
    {
      socket->waitForReadyRead(500);
      QByteArray Data = socket->readAll();
//      QDataStream stream(&Data, QIODevice::ReadOnly);


//      stream >>Data;
       qDebug()<<Data;
       //socket->waitForReadyRead(500);
       int a=10;

       QString s=QString::number(a);
        QByteArray Data_2=s.toUtf8();
       socket->write(Data_2);

    }
}

//void ClientWindow::paintEvent(QPaintEvent *event)
//{
//    Q_UNUSED(event);
//    QPainter painter(this); // Создаём объект отрисовщика
//    // Устанавливаем кисть абриса
//  //  painter.setPen(QPen(Qt::white, 1, Qt::SolidLine, Qt::FlatCap));



//        painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
//          painter.drawLine(0, 0, 200, 200);
//    }

void ClientWindow::upd()
{
     scene->clear();
}



void ClientWindow::on_pushButton_3_clicked()
{
     scene->clear();

}
