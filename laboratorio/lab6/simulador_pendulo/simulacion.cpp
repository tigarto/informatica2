#include "simulacion.h"
#include "ui_simulacion.h"

Simulacion::Simulacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Simulacion)
{
    ui->setupUi(this);

    ui->vista->setMinimumSize(510, 510);
    escena= new QGraphicsScene(0, 0, 500, 500);
    ui->vista->setScene(escena);
    pendulus= new Pendulo(250, 0);

    pendulus->setTransformOriginPoint(pendulus->getX(),pendulus->getY());
    pendulus->setRotation(-80);//Se rota.
    escena->addItem(pendulus);

    on=false;
    time= new QTimer;
    movpen= new MovimientoPendulo(-0.785, 0, 1);

    connect(ui->inicio, SIGNAL(pressed()),
            this, SLOT(start()));

    connect(time, SIGNAL(timeout()),
            this, SLOT(actualizar()));


}

Simulacion::~Simulacion()
{
    delete ui;
}

void Simulacion::start()
{
    if(on==false){
        time->start(50);
        qDebug()<<"Empezó!!";
        ui->inicio->setText("Stop");
        on=true;
    }
    else{
        time->stop();
        ui->inicio->setText("Start");
        qDebug()<<"Paró!!";
        on=false;
    }
}

void Simulacion::actualizar()
{
    movpen->update(0.005);
    //qDebug()<<movpen->getAcAng();
    qDebug()<<movpen->getAngulo()*(180/3.1416);

}
