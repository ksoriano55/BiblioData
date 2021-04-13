/********************************************************************************
** Form generated from reading UI file 'frmprestamo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMPRESTAMO_H
#define UI_FRMPRESTAMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmPrestamo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextBrowser *txtIdPrestamo;
    QTextBrowser *txtIdCliente;
    QTextBrowser *txtNombreCliente;
    QTextBrowser *txtIdLibro;
    QTextBrowser *txtNombreLibro;
    QTextBrowser *txtCantInicial;
    QTextBrowser *txtCantActual;
    QTextBrowser *txtFechaAsignacion;
    QTextBrowser *txtFechaDevolucion;
    QPushButton *btnNuevo;
    QPushButton *btnGuardar;
    QPushButton *btnEditar;
    QPushButton *btnEliminar;
    QPushButton *btnSalir;

    void setupUi(QWidget *FrmPrestamo)
    {
        if (FrmPrestamo->objectName().isEmpty())
            FrmPrestamo->setObjectName(QString::fromUtf8("FrmPrestamo"));
        FrmPrestamo->resize(509, 348);
        label = new QLabel(FrmPrestamo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 211, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(FrmPrestamo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 81, 20));
        label_3 = new QLabel(FrmPrestamo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 110, 51, 21));
        label_4 = new QLabel(FrmPrestamo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 160, 41, 20));
        label_5 = new QLabel(FrmPrestamo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 190, 51, 31));
        label_5->setWordWrap(true);
        label_6 = new QLabel(FrmPrestamo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 190, 41, 31));
        label_6->setWordWrap(true);
        label_7 = new QLabel(FrmPrestamo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 230, 71, 31));
        label_7->setWordWrap(true);
        label_8 = new QLabel(FrmPrestamo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 230, 71, 31));
        label_8->setWordWrap(true);
        txtIdPrestamo = new QTextBrowser(FrmPrestamo);
        txtIdPrestamo->setObjectName(QString::fromUtf8("txtIdPrestamo"));
        txtIdPrestamo->setGeometry(QRect(140, 70, 291, 31));
        txtIdCliente = new QTextBrowser(FrmPrestamo);
        txtIdCliente->setObjectName(QString::fromUtf8("txtIdCliente"));
        txtIdCliente->setGeometry(QRect(140, 110, 61, 31));
        txtNombreCliente = new QTextBrowser(FrmPrestamo);
        txtNombreCliente->setObjectName(QString::fromUtf8("txtNombreCliente"));
        txtNombreCliente->setGeometry(QRect(210, 110, 221, 31));
        txtIdLibro = new QTextBrowser(FrmPrestamo);
        txtIdLibro->setObjectName(QString::fromUtf8("txtIdLibro"));
        txtIdLibro->setGeometry(QRect(140, 150, 61, 31));
        txtNombreLibro = new QTextBrowser(FrmPrestamo);
        txtNombreLibro->setObjectName(QString::fromUtf8("txtNombreLibro"));
        txtNombreLibro->setGeometry(QRect(210, 150, 221, 31));
        txtCantInicial = new QTextBrowser(FrmPrestamo);
        txtCantInicial->setObjectName(QString::fromUtf8("txtCantInicial"));
        txtCantInicial->setGeometry(QRect(140, 190, 101, 31));
        txtCantActual = new QTextBrowser(FrmPrestamo);
        txtCantActual->setObjectName(QString::fromUtf8("txtCantActual"));
        txtCantActual->setGeometry(QRect(330, 190, 101, 31));
        txtFechaAsignacion = new QTextBrowser(FrmPrestamo);
        txtFechaAsignacion->setObjectName(QString::fromUtf8("txtFechaAsignacion"));
        txtFechaAsignacion->setGeometry(QRect(140, 230, 101, 31));
        txtFechaDevolucion = new QTextBrowser(FrmPrestamo);
        txtFechaDevolucion->setObjectName(QString::fromUtf8("txtFechaDevolucion"));
        txtFechaDevolucion->setGeometry(QRect(330, 230, 101, 31));
        btnNuevo = new QPushButton(FrmPrestamo);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        btnNuevo->setGeometry(QRect(40, 300, 75, 23));
        btnGuardar = new QPushButton(FrmPrestamo);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(120, 300, 75, 23));
        btnEditar = new QPushButton(FrmPrestamo);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setGeometry(QRect(200, 300, 75, 23));
        btnEliminar = new QPushButton(FrmPrestamo);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));
        btnEliminar->setGeometry(QRect(280, 300, 75, 23));
        btnSalir = new QPushButton(FrmPrestamo);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(360, 300, 75, 23));

        retranslateUi(FrmPrestamo);

        QMetaObject::connectSlotsByName(FrmPrestamo);
    } // setupUi

    void retranslateUi(QWidget *FrmPrestamo)
    {
        FrmPrestamo->setWindowTitle(QApplication::translate("FrmPrestamo", "Form", nullptr));
        label->setText(QApplication::translate("FrmPrestamo", "Prestamos de Libros", nullptr));
        label_2->setText(QApplication::translate("FrmPrestamo", "ID PRESTAMO:", nullptr));
        label_3->setText(QApplication::translate("FrmPrestamo", "CLIENTE:", nullptr));
        label_4->setText(QApplication::translate("FrmPrestamo", "LIBRO:", nullptr));
        label_5->setText(QApplication::translate("FrmPrestamo", "CANT. INICIAL:", nullptr));
        label_6->setText(QApplication::translate("FrmPrestamo", "CANT. ACTUAL:", nullptr));
        label_7->setText(QApplication::translate("FrmPrestamo", "FECHA ASIGNACION:", nullptr));
        label_8->setText(QApplication::translate("FrmPrestamo", "FECHA DEVOLUCION:", nullptr));
        txtIdPrestamo->setHtml(QApplication::translate("FrmPrestamo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        btnNuevo->setText(QApplication::translate("FrmPrestamo", "NUEVO", nullptr));
        btnGuardar->setText(QApplication::translate("FrmPrestamo", "GUARDAR", nullptr));
        btnEditar->setText(QApplication::translate("FrmPrestamo", "EDITAR", nullptr));
        btnEliminar->setText(QApplication::translate("FrmPrestamo", "ELIMINAR", nullptr));
        btnSalir->setText(QApplication::translate("FrmPrestamo", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmPrestamo: public Ui_FrmPrestamo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPRESTAMO_H
