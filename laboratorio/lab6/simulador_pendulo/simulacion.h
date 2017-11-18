#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include "movimientopendulo.h"
#include "pendulo.h"

namespace Ui {
class Simulacion;
}

class Simulacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Simulacion(QWidget *parent = 0);
    ~Simulacion();

public slots:
    void start();
    void actualizar();

private:
    Ui::Simulacion *ui;

    QTimer * time;
    bool on;
    MovimientoPendulo * movpen;
    QGraphicsScene * escena;
    Pendulo * pendulus;



};

#endif // SIMULACION_H
