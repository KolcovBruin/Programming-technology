#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QObject>
#include <QTcpServer>
#include <QDataStream>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui { class ClientWindow; }
QT_END_NAMESPACE

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();
    QTcpSocket* socket;
    QByteArray Data;
    void paintEvent(QPaintEvent *event);
public slots:
    void sockReady();
    void sockDisc();

private slots:
    void on_pushButton_clicked();



private:
    Ui::ClientWindow *ui;
};
#endif // CLIENTWINDOW_H
