/********************************************************************************
** Form generated from reading UI file 'simulacion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULACION_H
#define UI_SIMULACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulacion
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *cuerda;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *inicio;
    QGraphicsView *vista;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *anguloInicial;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *velocidadInicial;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Simulacion)
    {
        if (Simulacion->objectName().isEmpty())
            Simulacion->setObjectName(QStringLiteral("Simulacion"));
        Simulacion->resize(313, 326);
        centralWidget = new QWidget(Simulacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        cuerda = new QDoubleSpinBox(centralWidget);
        cuerda->setObjectName(QStringLiteral("cuerda"));

        horizontalLayout->addWidget(cuerda);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        inicio = new QPushButton(centralWidget);
        inicio->setObjectName(QStringLiteral("inicio"));

        horizontalLayout_5->addWidget(inicio);


        verticalLayout->addLayout(horizontalLayout_5);

        vista = new QGraphicsView(centralWidget);
        vista->setObjectName(QStringLiteral("vista"));
        vista->setMinimumSize(QSize(1000, 0));

        verticalLayout->addWidget(vista);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        anguloInicial = new QDoubleSpinBox(centralWidget);
        anguloInicial->setObjectName(QStringLiteral("anguloInicial"));

        horizontalLayout_2->addWidget(anguloInicial);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        velocidadInicial = new QDoubleSpinBox(centralWidget);
        velocidadInicial->setObjectName(QStringLiteral("velocidadInicial"));

        horizontalLayout_3->addWidget(velocidadInicial);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        Simulacion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Simulacion);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 313, 21));
        Simulacion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Simulacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Simulacion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Simulacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Simulacion->setStatusBar(statusBar);

        retranslateUi(Simulacion);

        QMetaObject::connectSlotsByName(Simulacion);
    } // setupUi

    void retranslateUi(QMainWindow *Simulacion)
    {
        Simulacion->setWindowTitle(QApplication::translate("Simulacion", "Simulacion", 0));
        label_3->setText(QApplication::translate("Simulacion", "Cuerda", 0));
        inicio->setText(QApplication::translate("Simulacion", "Start", 0));
        label_2->setText(QApplication::translate("Simulacion", "Angulo", 0));
        label->setText(QApplication::translate("Simulacion", "Velocidad Inicial", 0));
    } // retranslateUi

};

namespace Ui {
    class Simulacion: public Ui_Simulacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULACION_H
