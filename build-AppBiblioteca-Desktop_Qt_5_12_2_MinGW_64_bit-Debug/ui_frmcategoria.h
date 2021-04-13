/********************************************************************************
** Form generated from reading UI file 'frmcategoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCATEGORIA_H
#define UI_FRMCATEGORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmCategoria
{
public:
    QLabel *label;
    QTextBrowser *txtId;
    QTextBrowser *txtCategoria;
    QPushButton *btnNuevo;
    QPushButton *btnGuardar;
    QPushButton *btnEditar;
    QPushButton *btnEliminar;
    QPushButton *btnSalir;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *FrmCategoria)
    {
        if (FrmCategoria->objectName().isEmpty())
            FrmCategoria->setObjectName(QString::fromUtf8("FrmCategoria"));
        FrmCategoria->resize(453, 232);
        label = new QLabel(FrmCategoria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 141, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        txtId = new QTextBrowser(FrmCategoria);
        txtId->setObjectName(QString::fromUtf8("txtId"));
        txtId->setGeometry(QRect(110, 60, 256, 31));
        txtCategoria = new QTextBrowser(FrmCategoria);
        txtCategoria->setObjectName(QString::fromUtf8("txtCategoria"));
        txtCategoria->setGeometry(QRect(110, 100, 256, 31));
        btnNuevo = new QPushButton(FrmCategoria);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        btnNuevo->setGeometry(QRect(20, 160, 75, 23));
        btnGuardar = new QPushButton(FrmCategoria);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(100, 160, 75, 23));
        btnEditar = new QPushButton(FrmCategoria);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setGeometry(QRect(180, 160, 75, 23));
        btnEliminar = new QPushButton(FrmCategoria);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));
        btnEliminar->setGeometry(QRect(260, 160, 75, 23));
        btnSalir = new QPushButton(FrmCategoria);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(340, 160, 75, 23));
        label_2 = new QLabel(FrmCategoria);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 60, 21, 16));
        label_3 = new QLabel(FrmCategoria);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 71, 16));

        retranslateUi(FrmCategoria);

        QMetaObject::connectSlotsByName(FrmCategoria);
    } // setupUi

    void retranslateUi(QWidget *FrmCategoria)
    {
        FrmCategoria->setWindowTitle(QApplication::translate("FrmCategoria", "Form", nullptr));
        label->setText(QApplication::translate("FrmCategoria", "CATEGORIA", nullptr));
        btnNuevo->setText(QApplication::translate("FrmCategoria", "NUEVO", nullptr));
        btnGuardar->setText(QApplication::translate("FrmCategoria", "GUARDAR", nullptr));
        btnEditar->setText(QApplication::translate("FrmCategoria", "EDITAR", nullptr));
        btnEliminar->setText(QApplication::translate("FrmCategoria", "ELIMINAR", nullptr));
        btnSalir->setText(QApplication::translate("FrmCategoria", "SALIR", nullptr));
        label_2->setText(QApplication::translate("FrmCategoria", "ID:", nullptr));
        label_3->setText(QApplication::translate("FrmCategoria", "DESCRIPCION:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmCategoria: public Ui_FrmCategoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCATEGORIA_H
