#include "frmlibro.h"
#include "ui_frmlibro.h"

FrmLibro::FrmLibro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmLibro)
{
    ui->setupUi(this);
}

FrmLibro::~FrmLibro()
{
    delete ui;
}
