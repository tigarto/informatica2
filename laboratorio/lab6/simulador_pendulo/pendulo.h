#ifndef PENDULO_H
#define PENDULO_H
#include <QGraphicsItem>
#include <QPainter>

class Pendulo: public QGraphicsItem
{
private:
    int x;
    int y;

public:

    Pendulo();
    Pendulo(int _x, int _y);

    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);


};

#endif // PENDULO_H
