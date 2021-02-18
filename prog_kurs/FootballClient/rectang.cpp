#include "rectang.h"

Rectang::Rectang()
    :   QGraphicsItem()
{

}

Rectang::~Rectang()
{

}

void Rectang::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
   qDebug()<<"Rectang";

  // addLine(0,0,0,50,QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap));

}
void Rectang::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
        // Помещаем координаты точек в полигональную модель
        polygon << QPoint(0,-40) << QPoint(25,40) << QPoint(-25,40);
        painter->setBrush(Qt::red);     // Устанавливаем кисть, которой будем отрисовывать объект
        painter->drawPolygon(polygon);  // Рисуем треугольник по полигональной модели
        Q_UNUSED(option);
        Q_UNUSED(widget);
}

QRectF Rectang::boundingRect() const
{
    return QRectF(-25,-40,50,80);   // Ограничиваем область, в которой лежит треугольник
}

