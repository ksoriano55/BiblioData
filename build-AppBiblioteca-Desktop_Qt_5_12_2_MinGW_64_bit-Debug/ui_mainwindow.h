/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *btnClienteShow;
    QPushButton *btnLibrosShow;
    QPushButton *btnPrestamosShow;
    QPushButton *btnCategoriaShow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(364, 314);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 61, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        btnClienteShow = new QPushButton(centralWidget);
        btnClienteShow->setObjectName(QString::fromUtf8("btnClienteShow"));
        btnClienteShow->setGeometry(QRect(120, 60, 111, 31));
        btnLibrosShow = new QPushButton(centralWidget);
        btnLibrosShow->setObjectName(QString::fromUtf8("btnLibrosShow"));
        btnLibrosShow->setGeometry(QRect(120, 100, 111, 31));
        btnPrestamosShow = new QPushButton(centralWidget);
        btnPrestamosShow->setObjectName(QString::fromUtf8("btnPrestamosShow"));
        btnPrestamosShow->setGeometry(QRect(120, 180, 111, 31));
        btnCategoriaShow = new QPushButton(centralWidget);
        btnCategoriaShow->setObjectName(QString::fromUtf8("btnCategoriaShow"));
        btnCategoriaShow->setGeometry(QRect(120, 140, 111, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 364, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "MEN\303\232", nullptr));
        btnClienteShow->setText(QApplication::translate("MainWindow", "CLIENTE", nullptr));
        btnLibrosShow->setText(QApplication::translate("MainWindow", "LIBROS", nullptr));
        btnPrestamosShow->setText(QApplication::translate("MainWindow", "PRESTAMOS LIBROS", nullptr));
        btnCategoriaShow->setText(QApplication::translate("MainWindow", "CATEGORIA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
