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

private:
    Ui::FrmPrestamo *ui;
};

#endif // FRMPRESTAMO_H
