#include "movimientopendulo.h"

float MovimientoPendulo::getAngulo() const
{
    return angulo;
}

void MovimientoPendulo::setAngulo(float value)
{
    angulo = value;
}

float MovimientoPendulo::getW() const
{
    return w;
}

void MovimientoPendulo::setW(float value)
{
    w = value;
}

float MovimientoPendulo::getAcAng() const
{
    return acAng;
}

void MovimientoPendulo::setAcAng(float value)
{
    acAng = value;
}

float MovimientoPendulo::getTam() const
{
    return tam;
}

void MovimientoPendulo::setTam(float value)
{
    tam = value;
}

MovimientoPendulo::MovimientoPendulo()
{

}

MovimientoPendulo::MovimientoPendulo(float angIni, float velIni, float tamIni)
{
    angulo=angIni;
    tam= tamIni;
    w= velIni;
}

void MovimientoPendulo::actAng(float dt)
{
    angulo+= w*dt + (acAng*dt*dt)/2;
}

void MovimientoPendulo::actVel(float dt)
{
    w+= acAng*dt;
}

void MovimientoPendulo::actAcel(float dt)
{
    acAng= g*cos(angulo);
}

float MovimientoPendulo::calcX()
{
    float x;
    x= tam* sin(angulo);
    return x;
}

float MovimientoPendulo::calcY()
{
    float y;
    y= tam* cos(angulo);
    return y;
}

void MovimientoPendulo::update(float dt)
{
    actAcel(dt);
    actVel(dt);
    actAng(dt);

}

