#include "frmcliente.h"
#include "ui_frmcliente.h"

FrmCliente::FrmCliente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmCliente)
{
    ui->setupUi(this);
}

FrmCliente::~FrmCliente()
{
    delete ui;
}
