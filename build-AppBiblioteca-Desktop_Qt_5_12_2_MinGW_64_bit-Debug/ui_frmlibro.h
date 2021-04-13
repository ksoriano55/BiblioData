/********************************************************************************
** Form generated from reading UI file 'frmlibro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLIBRO_H
#define UI_FRMLIBRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmLibro
{
public:
    QLabel *label;
    QTextBrowser *txtLibro;
    QTextBrowser *txtCategoria;
    QTextBrowser *txtPrecio;
    QTextBrowser *txtCantidad;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnNuevo;
    QPushButton *btnGuardar;
    QPushButton *btnEditar;
    QPushButton *btnEliminar;
    QPushButton *btnSalir;
    QTextBrowser *txtIdLibro;
    QLabel *label_6;
    QTextBrowser *txtIdCategoria;

    void setupUi(QWidget *FrmLibro)
    {
        if (FrmLibro->objectName().isEmpty())
            FrmLibro->setObjectName(QString::fromUtf8("FrmLibro"));
        FrmLibro->resize(483, 368);
        label = new QLabel(FrmLibro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 71, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        txtLibro = new QTextBrowser(FrmLibro);
        txtLibro->setObjectName(QString::fromUtf8("txtLibro"));
        txtLibro->setGeometry(QRect(140, 110, 256, 31));
        txtCategoria = new QTextBrowser(FrmLibro);
        txtCategoria->setObjectName(QString::fromUtf8("txtCategoria"));
        txtCategoria->setGeometry(QRect(205, 150, 191, 31));
        txtPrecio = new QTextBrowser(FrmLibro);
        txtPrecio->setObjectName(QString::fromUtf8("txtPrecio"));
        txtPrecio->setGeometry(QRect(140, 190, 256, 31));
        txtCantidad = new QTextBrowser(FrmLibro);
        txtCantidad->setObjectName(QString::fromUtf8("txtCantidad"));
        txtCantidad->setGeometry(QRect(140, 230, 256, 31));
        label_2 = new QLabel(FrmLibro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 110, 51, 21));
        label_3 = new QLabel(FrmLibro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 150, 61, 21));
        label_4 = new QLabel(FrmLibro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 190, 51, 16));
        label_5 = new QLabel(FrmLibro);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 230, 61, 16));
        btnNuevo = new QPushButton(FrmLibro);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        btnNuevo->setGeometry(QRect(40, 300, 75, 23));
        btnGuardar = new QPushButton(FrmLibro);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(120, 300, 75, 23));
        btnEditar = new QPushButton(FrmLibro);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setGeometry(QRect(200, 300, 75, 23));
        btnEliminar = new QPushButton(FrmLibro);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));
        btnEliminar->setGeometry(QRect(280, 300, 75, 23));
        btnSalir = new QPushButton(FrmLibro);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(360, 300, 75, 23));
        txtIdLibro = new QTextBrowser(FrmLibro);
        txtIdLibro->setObjectName(QString::fromUtf8("txtIdLibro"));
        txtIdLibro->setGeometry(QRect(140, 70, 101, 31));
        label_6 = new QLabel(FrmLibro);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 80, 21, 16));
        txtIdCategoria = new QTextBrowser(FrmLibro);
        txtIdCategoria->setObjectName(QString::fromUtf8("txtIdCategoria"));
        txtIdCategoria->setGeometry(QRect(140, 150, 61, 31));

        retranslateUi(FrmLibro);

        QMetaObject::connectSlotsByName(FrmLibro);
    } // setupUi

    void retranslateUi(QWidget *FrmLibro)
    {
        FrmLibro->setWindowTitle(QApplication::translate("FrmLibro", "Form", nullptr));
        label->setText(QApplication::translate("FrmLibro", "LIBRO", nullptr));
        label_2->setText(QApplication::translate("FrmLibro", "NOMBRE:", nullptr));
        label_3->setText(QApplication::translate("FrmLibro", "CATEGORIA:", nullptr));
        label_4->setText(QApplication::translate("FrmLibro", "PRECIO:", nullptr));
        label_5->setText(QApplication::translate("FrmLibro", "CANITDAD:", nullptr));
        btnNuevo->setText(QApplication::translate("FrmLibro", "NUEVO", nullptr));
        btnGuardar->setText(QApplication::translate("FrmLibro", "GUARDAR", nullptr));
        btnEditar->setText(QApplication::translate("FrmLibro", "EDITAR", nullptr));
        btnEliminar->setText(QApplication::translate("FrmLibro", "ELIMINAR", nullptr));
        btnSalir->setText(QApplication::translate("FrmLibro", "SALIR", nullptr));
        label_6->setText(QApplication::translate("FrmLibro", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmLibro: public Ui_FrmLibro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLIBRO_H
