#include "frmprestamo.h"
#include "ui_frmprestamo.h"

FrmPrestamo::FrmPrestamo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmPrestamo)
{
    ui->setupUi(this);
}

FrmPrestamo::~FrmPrestamo()
{
    delete ui;
}

void FrmPrestamo::on_btnSalir_clicked()
{
    FrmPrestamo *VentPrestamo = new FrmPrestamo();
    VentPrestamo->close();
}
