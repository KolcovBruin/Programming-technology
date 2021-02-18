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
      rectangle->setPos(0,0);

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
    socket->connectToHost("127.0.0.1",3333);
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
      QByteArray b = socket->readAll();
      QDataStream stream(&b, QIODevice::ReadOnly);


      stream >>Data;
       qDebug()<<Data;
    }
}

void ClientWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this); // Создаём объект отрисовщика
    // Устанавливаем кисть абриса
  //  painter.setPen(QPen(Qt::white, 1, Qt::SolidLine, Qt::FlatCap));



        painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
          painter.drawLine(0, 0, 200, 200);
    }




