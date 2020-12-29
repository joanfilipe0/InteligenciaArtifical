/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuSair;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(653, 391);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(490, 90, 113, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 70, 111, 16));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 120, 111, 20));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(490, 140, 113, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 180, 131, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 220, 51, 31));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 220, 71, 31));
        label_7->setFont(font);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(460, 260, 181, 81));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 121, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        pushButton_2->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 659, 59));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font3.setPointSize(18);
        label->setFont(font3);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 70, 111, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(16);
        label_4->setFont(font4);
        radioButton = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(270, 70, 161, 21));
        radioButton->setFont(font2);
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(270, 100, 171, 17));
        radioButton_2->setFont(font2);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 261, 31));
        QFont font5;
        font5.setPointSize(8);
        label_8->setFont(font5);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 130, 401, 201));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 220, 211, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 653, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuSair = new QMenu(menubar);
        menuSair->setObjectName(QString::fromUtf8("menuSair"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuSair->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Busca", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "In\303\255cio", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Destino", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Custo:", nullptr));
        label_7->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Buscar arquivo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Busca em Grafos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Algoritmo:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Busca em Largura", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Busca Custo Uniforme", nullptr));
        label_8->setText(QString());
        label_5->setText(QString());
        label_9->setText(QString());
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuSair->setTitle(QCoreApplication::translate("MainWindow", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
