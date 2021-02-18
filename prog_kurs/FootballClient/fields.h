#ifndef FIELD_H
#define FIELD_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QMainWindow>
#include <QDebug>
#include <QPainter>
class Fields : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Fields(QObject *parent = 0);

      ~Fields();
private:
 void mousePressEvent(QGraphicsSceneMouseEvent * event);

};

#endif // FIELD_H
