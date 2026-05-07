/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *username;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *lineEdit_password;
    QPushButton *login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 450);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 100, 151, 61));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);\n"
"font: 35pt \"Edwardian Script ITC\";"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 160, 221, 141));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        username = new QLabel(groupBox);
        username->setObjectName("username");

        horizontalLayout->addWidget(username);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        password = new QLabel(groupBox);
        password->setObjectName("password");

        horizontalLayout_2->addWidget(password);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);

        login = new QPushButton(groupBox);
        login->setObjectName("login");

        verticalLayout->addWidget(login);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TimeList", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
