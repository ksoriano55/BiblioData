/********************************************************************************
** Form generated from reading UI file 'frmcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCLIENTE_H
#define UI_FRMCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmCliente
{
public:
    QLabel *label;
    QTextBrowser *txtCodigo;
    QTextBrowser *txtCliente;
    QTextBrowser *txtTelefono;
    QTextBrowser *txtDireccion;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnGuardar;
    QPushButton *btnEditar;
    QPushButton *btnEliminar;
    QPushButton *btnSalir;
    QPushButton *btnNuevo;
    QLabel *label_6;
    QTextBrowser *txtIdCliente;

    void setupUi(QWidget *FrmCliente)
    {
        if (FrmCliente->objectName().isEmpty())
            FrmCliente->setObjectName(QString::fromUtf8("FrmCliente"));
        FrmCliente->resize(517, 347);
        label = new QLabel(FrmCliente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 81, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        txtCodigo = new QTextBrowser(FrmCliente);
        txtCodigo->setObjectName(QString::fromUtf8("txtCodigo"));
        txtCodigo->setGeometry(QRect(180, 100, 256, 31));
        txtCliente = new QTextBrowser(FrmCliente);
        txtCliente->setObjectName(QString::fromUtf8("txtCliente"));
        txtCliente->setGeometry(QRect(180, 140, 256, 31));
        txtTelefono = new QTextBrowser(FrmCliente);
        txtTelefono->setObjectName(QString::fromUtf8("txtTelefono"));
        txtTelefono->setGeometry(QRect(180, 180, 256, 31));
        txtDireccion = new QTextBrowser(FrmCliente);
        txtDireccion->setObjectName(QString::fromUtf8("txtDireccion"));
        txtDireccion->setGeometry(QRect(180, 220, 256, 31));
        label_2 = new QLabel(FrmCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 100, 51, 21));
        label_3 = new QLabel(FrmCliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 150, 51, 16));
        label_4 = new QLabel(FrmCliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 190, 61, 16));
        label_5 = new QLabel(FrmCliente);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 230, 61, 16));
        btnGuardar = new QPushButton(FrmCliente);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(150, 290, 75, 23));
        btnEditar = new QPushButton(FrmCliente);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setGeometry(QRect(230, 290, 75, 23));
        btnEliminar = new QPushButton(FrmCliente);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));
        btnEliminar->setGeometry(QRect(310, 290, 75, 23));
        btnSalir = new QPushButton(FrmCliente);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(390, 290, 75, 23));
        btnNuevo = new QPushButton(FrmCliente);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        btnNuevo->setGeometry(QRect(70, 290, 75, 23));
        label_6 = new QLabel(FrmCliente);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 70, 21, 16));
        txtIdCliente = new QTextBrowser(FrmCliente);
        txtIdCliente->setObjectName(QString::fromUtf8("txtIdCliente"));
        txtIdCliente->setGeometry(QRect(180, 60, 256, 31));

        retranslateUi(FrmCliente);

        QMetaObject::connectSlotsByName(FrmCliente);
    } // setupUi

    void retranslateUi(QWidget *FrmCliente)
    {
        FrmCliente->setWindowTitle(QApplication::translate("FrmCliente", "Form", nullptr));
        label->setText(QApplication::translate("FrmCliente", "CLIENTE", nullptr));
        label_2->setText(QApplication::translate("FrmCliente", "CODIGO:", nullptr));
        label_3->setText(QApplication::translate("FrmCliente", "NOMBRE:", nullptr));
        label_4->setText(QApplication::translate("FrmCliente", "TELEFONO:", nullptr));
        label_5->setText(QApplication::translate("FrmCliente", "DIRECCION:", nullptr));
        btnGuardar->setText(QApplication::translate("FrmCliente", "GUARDAR", nullptr));
        btnEditar->setText(QApplication::translate("FrmCliente", "EDITAR", nullptr));
        btnEliminar->setText(QApplication::translate("FrmCliente", "ELIMINAR", nullptr));
        btnSalir->setText(QApplication::translate("FrmCliente", "SALIR", nullptr));
        btnNuevo->setText(QApplication::translate("FrmCliente", "NUEVO", nullptr));
        label_6->setText(QApplication::translate("FrmCliente", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmCliente: public Ui_FrmCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCLIENTE_H
