#ifndef MOVIMIENTOPENDULO_H
#define MOVIMIENTOPENDULO_H
#define g -9.8
#include <cmath>


class MovimientoPendulo
{
private:
    float angulo;
    float w;
    float acAng;
    float tam;

public:
    MovimientoPendulo();
    MovimientoPendulo(float angIni,
                       float velIni,
                      float tamIni);

    void actAng(float dt);
    void actVel(float dt);
    void actAcel(float dt);
    float calcX();
    float calcY();
    void update(float dt);

    float getAngulo() const;
    void setAngulo(float value);
    float getW() const;
    void setW(float value);
    float getAcAng() const;
    void setAcAng(float value);
    float getTam() const;
    void setTam(float value);
};

#endif // MOVIMIENTOPENDULO_H
