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
