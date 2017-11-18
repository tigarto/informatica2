#include "simulacion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Simulacion w;
    w.show();

    return a.exec();
}
