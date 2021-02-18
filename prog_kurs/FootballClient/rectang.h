#ifndef RECTANG_H
#define RECTANG_H
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QMainWindow>
#include <QDebug>

class Rectang : public QGraphicsItem
{

public:
    Rectang();

      ~Rectang();
private:
 void mousePressEvent(QGraphicsSceneMouseEvent * event);
protected:
 QRectF boundingRect() const;
 void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // RECTANG_H
