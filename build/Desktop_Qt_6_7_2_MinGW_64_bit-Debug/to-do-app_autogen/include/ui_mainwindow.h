/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *txttask;
    QPushButton *btnadd;
    QPushButton *btnremove;
    QPushButton *btnremoveall;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txttask = new QLineEdit(centralwidget);
        txttask->setObjectName("txttask");
        txttask->setGeometry(QRect(70, 60, 491, 61));
        btnadd = new QPushButton(centralwidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(572, 58, 131, 61));
        btnremove = new QPushButton(centralwidget);
        btnremove->setObjectName("btnremove");
        btnremove->setGeometry(QRect(500, 520, 93, 29));
        btnremoveall = new QPushButton(centralwidget);
        btnremoveall->setObjectName("btnremoveall");
        btnremoveall->setGeometry(QRect(610, 520, 93, 29));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(70, 140, 631, 371));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnadd->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        btnremove->setText(QCoreApplication::translate("MainWindow", "remove ", nullptr));
        btnremoveall->setText(QCoreApplication::translate("MainWindow", "remove all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
