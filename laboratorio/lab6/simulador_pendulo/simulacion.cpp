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
    //pendulus->setRotation(30);//Se rota.
    escena->addItem(pendulus);
   // ui->anguloInicial->setDisabled(true);
    ui->velocidadInicial->setDisabled(true);
    ui->cuerda->setDisabled(true);
    on=false;
    time= new QTimer;
    movpen= new MovimientoPendulo(-0.785, 0, 1);

    connect(ui->inicio, SIGNAL(pressed()),
            this, SLOT(start()));

    connect(time, SIGNAL(timeout()),
            this, SLOT(actualizar()));

    connect(ui->anguloInicial,SIGNAL(valueChanged(double)),
            this,SLOT(definirAngulo(double)));
}

Simulacion::~Simulacion()
{
    delete ui;
}

void Simulacion::start()
{
    if(on==false){
        time->start(10);
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
    float phi;
    movpen->update(0.005);
    //qDebug()<<movpen->getAcAng();
    phi=movpen->getAngulo()*(180/3.1416);
    pendulus->setRotation(-90-phi);

}

void Simulacion::definirAngulo(double ang)
{
   pendulus->setRotation(-ang);
}
