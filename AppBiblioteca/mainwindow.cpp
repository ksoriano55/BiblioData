#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnClienteShow_clicked()
{
    FrmCliente *VentClient = new FrmCliente();
    VentClient->show();
}

void MainWindow::on_btnLibrosShow_clicked()
{
    FrmLibro *VentLibro = new FrmLibro();
    VentLibro->show();
}

void MainWindow::on_btnCategoriaShow_clicked()
{
    FrmCategoria *VentCategoria = new FrmCategoria();
    VentCategoria->show();
}

void MainWindow::on_btnPrestamosShow_clicked()
{
    FrmPrestamo *VentPrestamo = new FrmPrestamo();
    VentPrestamo->show();
}
