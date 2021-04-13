#ifndef FRMPRESTAMO_H
#define FRMPRESTAMO_H

#include <QWidget>

namespace Ui {
class FrmPrestamo;
}

class FrmPrestamo : public QWidget
{
    Q_OBJECT

public:
    explicit FrmPrestamo(QWidget *parent = nullptr);
    ~FrmPrestamo();

private slots:
    void on_btnSalir_clicked();

private:
    Ui::FrmPrestamo *ui;
};

#endif // FRMPRESTAMO_H
