#ifndef FRMLIBRO_H
#define FRMLIBRO_H

#include <QWidget>

namespace Ui {
class FrmLibro;
}

class FrmLibro : public QWidget
{
    Q_OBJECT
    
public:
    explicit FrmLibro(QWidget *parent = 0);
    ~FrmLibro();
    
private:
    Ui::FrmLibro *ui;
};

#endif // FRMLIBRO_H
