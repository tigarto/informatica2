#include "pendulo.h"

int Pendulo::getX() const
{
    return x;
}

int Pendulo::getY() const
{
    return y;
}

Pendulo::Pendulo()
{

}

Pendulo::Pendulo(int _x, int _y)
{
    x= _x;
    y= _y;
}

QRectF Pendulo::boundingRect() const
{
    return QRect(x-20, y, 40, 240);
}

void Pendulo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawLine(x, y, x, y+200);
    painter->setBrush(Qt::red);
    painter->drawEllipse(x-20, y+200, 40, 40);
}

