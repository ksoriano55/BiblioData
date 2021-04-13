#ifndef FRMCLIENTE_H
#define FRMCLIENTE_H

#include <QWidget>

namespace Ui {
class FrmCliente;
}

class FrmCliente : public QWidget
{
    Q_OBJECT
    
public:
    explicit FrmCliente(QWidget *parent = 0);
    ~FrmCliente();
    
private:
    Ui::FrmCliente *ui;
};

#endif // FRMCLIENTE_H
