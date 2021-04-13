#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <frmcliente.h>
#include<frmlibro.h>
#include<frmcategoria.h>
#include<frmprestamo.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_btnClienteShow_clicked();

    void on_btnLibrosShow_clicked();

    void on_btnCategoriaShow_clicked();

    void on_btnPrestamosShow_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
