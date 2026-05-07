/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QWidget *widget;
    QPushButton *first;
    QPushButton *setting;
    QPushButton *outting;
    QPushButton *calender;
    QLabel *out;
    QLabel *set;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *day;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidgetday;
    QWidget *week;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QTableWidget *tableWidgetweek;
    QWidget *page_2;
    QWidget *month;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidgetmonth;
    QWidget *work;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QTableWidget *tableWidgetwork;
    QPushButton *addrow;
    QWidget *study;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QTableWidget *tableWidgetstudy;
    QWidget *life;
    QWidget *widgetright;
    QLabel *label;
    QTimeEdit *startTimeEdit;
    QLabel *label_2;
    QTimeEdit *endTimeEdit;
    QLabel *label_3;
    QLineEdit *todoEdit;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName("SecondDialog");
        SecondDialog->resize(600, 450);
        SecondDialog->setMinimumSize(QSize(0, 450));
        SecondDialog->setMaximumSize(QSize(600, 1000));
        SecondDialog->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(SecondDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 10, 511, 41));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:8px;"));
        first = new QPushButton(widget);
        first->setObjectName("first");
        first->setGeometry(QRect(30, 10, 24, 16));
        first->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        setting = new QPushButton(widget);
        setting->setObjectName("setting");
        setting->setGeometry(QRect(330, 10, 24, 16));
        setting->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        outting = new QPushButton(widget);
        outting->setObjectName("outting");
        outting->setGeometry(QRect(450, 10, 24, 16));
        outting->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        calender = new QPushButton(widget);
        calender->setObjectName("calender");
        calender->setGeometry(QRect(130, 10, 24, 16));
        calender->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
"\n"
"color: rgb(0, 0, 0);"));
        out = new QLabel(widget);
        out->setObjectName("out");
        out->setGeometry(QRect(410, 10, 31, 20));
        out->setScaledContents(true);
        out->setAlignment(Qt::AlignmentFlag::AlignCenter);
        set = new QLabel(widget);
        set->setObjectName("set");
        set->setGeometry(QRect(293, 10, 31, 20));
        set->setScaledContents(true);
        set->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget_2 = new QWidget(SecondDialog);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, 70, 558, 371));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(widget_2);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        day = new QWidget();
        day->setObjectName("day");
        day->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        scrollArea = new QScrollArea(day);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 316, 353));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 314, 351));
        tableWidgetday = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidgetday->columnCount() < 1)
            tableWidgetday->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetday->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidgetday->rowCount() < 24)
            tableWidgetday->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(14, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(15, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(16, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(17, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(18, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(19, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(20, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(21, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(22, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidgetday->setVerticalHeaderItem(23, __qtablewidgetitem24);
        tableWidgetday->setObjectName("tableWidgetday");
        tableWidgetday->setGeometry(QRect(0, 0, 316, 353));
        tableWidgetday->horizontalHeader()->setStretchLastSection(true);
        tableWidgetday->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetday->verticalHeader()->setStretchLastSection(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(day);
        week = new QWidget();
        week->setObjectName("week");
        week->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);"));
        stackedWidget_2 = new QStackedWidget(week);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 0, 316, 351));
        page = new QWidget();
        page->setObjectName("page");
        tableWidgetweek = new QTableWidget(page);
        if (tableWidgetweek->columnCount() < 6)
            tableWidgetweek->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidgetweek->setHorizontalHeaderItem(5, __qtablewidgetitem30);
        if (tableWidgetweek->rowCount() < 24)
            tableWidgetweek->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(5, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(6, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(7, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(8, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(9, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(10, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(11, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(12, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(13, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(14, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(15, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(16, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(17, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(18, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(19, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(20, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(21, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(22, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidgetweek->setVerticalHeaderItem(23, __qtablewidgetitem54);
        tableWidgetweek->setObjectName("tableWidgetweek");
        tableWidgetweek->setGeometry(QRect(0, 0, 316, 351));
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget_2->addWidget(page_2);
        stackedWidget->addWidget(week);
        month = new QWidget();
        month->setObjectName("month");
        scrollArea_2 = new QScrollArea(month);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 0, 316, 353));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 314, 351));
        tableWidgetmonth = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidgetmonth->columnCount() < 12)
            tableWidgetmonth->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(3, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(4, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(5, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(6, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(7, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(8, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(9, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(10, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidgetmonth->setHorizontalHeaderItem(11, __qtablewidgetitem66);
        if (tableWidgetmonth->rowCount() < 31)
            tableWidgetmonth->setRowCount(31);
        tableWidgetmonth->setObjectName("tableWidgetmonth");
        tableWidgetmonth->setGeometry(QRect(0, 0, 316, 353));
        tableWidgetmonth->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        tableWidgetmonth->setRowCount(31);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        stackedWidget->addWidget(month);
        work = new QWidget();
        work->setObjectName("work");
        scrollArea_4 = new QScrollArea(work);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setGeometry(QRect(0, 0, 316, 353));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 314, 351));
        tableWidgetwork = new QTableWidget(scrollAreaWidgetContents_4);
        if (tableWidgetwork->columnCount() < 8)
            tableWidgetwork->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(1, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(2, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(3, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(4, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(5, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(6, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidgetwork->setHorizontalHeaderItem(7, __qtablewidgetitem74);
        tableWidgetwork->setObjectName("tableWidgetwork");
        tableWidgetwork->setGeometry(QRect(0, 0, 316, 353));
        tableWidgetwork->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        addrow = new QPushButton(scrollAreaWidgetContents_4);
        addrow->setObjectName("addrow");
        addrow->setGeometry(QRect(110, 300, 81, 24));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);
        stackedWidget->addWidget(work);
        study = new QWidget();
        study->setObjectName("study");
        scrollArea_3 = new QScrollArea(study);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(-1, 0, 316, 353));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 314, 351));
        tableWidgetstudy = new QTableWidget(scrollAreaWidgetContents_3);
        if (tableWidgetstudy->columnCount() < 7)
            tableWidgetstudy->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(3, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(4, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(5, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidgetstudy->setHorizontalHeaderItem(6, __qtablewidgetitem81);
        if (tableWidgetstudy->rowCount() < 7)
            tableWidgetstudy->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(1, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(2, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(3, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(4, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(5, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidgetstudy->setVerticalHeaderItem(6, __qtablewidgetitem88);
        tableWidgetstudy->setObjectName("tableWidgetstudy");
        tableWidgetstudy->setGeometry(QRect(0, 0, 316, 353));
        tableWidgetstudy->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        tableWidgetstudy->verticalHeader()->setDefaultSectionSize(100);
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        stackedWidget->addWidget(study);
        life = new QWidget();
        life->setObjectName("life");
        stackedWidget->addWidget(life);

        horizontalLayout->addWidget(stackedWidget);

        widgetright = new QWidget(widget_2);
        widgetright->setObjectName("widgetright");
        widgetright->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        label = new QLabel(widgetright);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 54, 16));
        startTimeEdit = new QTimeEdit(widgetright);
        startTimeEdit->setObjectName("startTimeEdit");
        startTimeEdit->setGeometry(QRect(0, 30, 101, 24));
        label_2 = new QLabel(widgetright);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 54, 16));
        endTimeEdit = new QTimeEdit(widgetright);
        endTimeEdit->setObjectName("endTimeEdit");
        endTimeEdit->setGeometry(QRect(0, 90, 101, 24));
        label_3 = new QLabel(widgetright);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 120, 54, 16));
        todoEdit = new QLineEdit(widgetright);
        todoEdit->setObjectName("todoEdit");
        todoEdit->setGeometry(QRect(0, 150, 101, 23));

        horizontalLayout->addWidget(widgetright);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(SecondDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QCoreApplication::translate("SecondDialog", "Dialog", nullptr));
        first->setText(QCoreApplication::translate("SecondDialog", "\351\246\226\351\241\265", nullptr));
        setting->setText(QCoreApplication::translate("SecondDialog", "\350\256\276\347\275\256", nullptr));
        outting->setText(QCoreApplication::translate("SecondDialog", "\345\257\274\345\207\272", nullptr));
        calender->setText(QCoreApplication::translate("SecondDialog", "\346\227\245\345\216\206", nullptr));
        out->setText(QCoreApplication::translate("SecondDialog", "TextLabel", nullptr));
        set->setText(QCoreApplication::translate("SecondDialog", "TextLabel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetday->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SecondDialog", "\344\273\273\345\212\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetday->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SecondDialog", "0\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetday->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SecondDialog", "1\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetday->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SecondDialog", "2\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetday->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SecondDialog", "3\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetday->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SecondDialog", "4\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetday->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SecondDialog", "5\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetday->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("SecondDialog", "6\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetday->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("SecondDialog", "7\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetday->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("SecondDialog", "8\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetday->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("SecondDialog", "9\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetday->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("SecondDialog", "10\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetday->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("SecondDialog", "11\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetday->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("SecondDialog", "12\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetday->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("SecondDialog", "13\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetday->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("SecondDialog", "14\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetday->verticalHeaderItem(15);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("SecondDialog", "15\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetday->verticalHeaderItem(16);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("SecondDialog", "16\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetday->verticalHeaderItem(17);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("SecondDialog", "17\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetday->verticalHeaderItem(18);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("SecondDialog", "18\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetday->verticalHeaderItem(19);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("SecondDialog", "19\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetday->verticalHeaderItem(20);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("SecondDialog", "20\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetday->verticalHeaderItem(21);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("SecondDialog", "21\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetday->verticalHeaderItem(22);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("SecondDialog", "22\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidgetday->verticalHeaderItem(23);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("SecondDialog", "23\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidgetweek->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidgetweek->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetweek->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetweek->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidgetweek->horizontalHeaderItem(4);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidgetweek->horizontalHeaderItem(5);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidgetweek->verticalHeaderItem(0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("SecondDialog", "0\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidgetweek->verticalHeaderItem(1);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("SecondDialog", "1\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidgetweek->verticalHeaderItem(2);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("SecondDialog", "2\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidgetweek->verticalHeaderItem(3);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("SecondDialog", "3\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidgetweek->verticalHeaderItem(4);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("SecondDialog", "4\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidgetweek->verticalHeaderItem(5);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("SecondDialog", "5\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidgetweek->verticalHeaderItem(6);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("SecondDialog", "6\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidgetweek->verticalHeaderItem(7);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("SecondDialog", "7\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidgetweek->verticalHeaderItem(8);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("SecondDialog", "8\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidgetweek->verticalHeaderItem(9);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("SecondDialog", "9\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidgetweek->verticalHeaderItem(10);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("SecondDialog", "10\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidgetweek->verticalHeaderItem(11);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("SecondDialog", "11\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidgetweek->verticalHeaderItem(12);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("SecondDialog", "12\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidgetweek->verticalHeaderItem(13);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("SecondDialog", "13\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidgetweek->verticalHeaderItem(14);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("SecondDialog", "14\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidgetweek->verticalHeaderItem(15);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("SecondDialog", "15\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidgetweek->verticalHeaderItem(16);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("SecondDialog", "16\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidgetweek->verticalHeaderItem(17);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("SecondDialog", "17\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidgetweek->verticalHeaderItem(18);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("SecondDialog", "18\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidgetweek->verticalHeaderItem(19);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("SecondDialog", "19\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidgetweek->verticalHeaderItem(20);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("SecondDialog", "20\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidgetweek->verticalHeaderItem(21);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("SecondDialog", "21\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidgetweek->verticalHeaderItem(22);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("SecondDialog", "22\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidgetweek->verticalHeaderItem(23);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("SecondDialog", "23\357\274\23200", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidgetmonth->horizontalHeaderItem(0);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("SecondDialog", "1\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidgetmonth->horizontalHeaderItem(1);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("SecondDialog", "2\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidgetmonth->horizontalHeaderItem(2);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("SecondDialog", "3\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidgetmonth->horizontalHeaderItem(3);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("SecondDialog", "4\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidgetmonth->horizontalHeaderItem(4);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("SecondDialog", "5\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidgetmonth->horizontalHeaderItem(5);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("SecondDialog", "6\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidgetmonth->horizontalHeaderItem(6);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("SecondDialog", "7\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidgetmonth->horizontalHeaderItem(7);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("SecondDialog", "8\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidgetmonth->horizontalHeaderItem(8);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("SecondDialog", "9\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidgetmonth->horizontalHeaderItem(9);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("SecondDialog", "10\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidgetmonth->horizontalHeaderItem(10);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("SecondDialog", "11\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidgetmonth->horizontalHeaderItem(11);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("SecondDialog", "12\346\234\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidgetwork->horizontalHeaderItem(0);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("SecondDialog", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidgetwork->horizontalHeaderItem(1);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidgetwork->horizontalHeaderItem(2);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidgetwork->horizontalHeaderItem(3);
        ___qtablewidgetitem70->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidgetwork->horizontalHeaderItem(4);
        ___qtablewidgetitem71->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidgetwork->horizontalHeaderItem(5);
        ___qtablewidgetitem72->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidgetwork->horizontalHeaderItem(6);
        ___qtablewidgetitem73->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidgetwork->horizontalHeaderItem(7);
        ___qtablewidgetitem74->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\346\227\245", nullptr));
        addrow->setText(QCoreApplication::translate("SecondDialog", "\346\267\273\345\212\240\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidgetstudy->horizontalHeaderItem(0);
        ___qtablewidgetitem75->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidgetstudy->horizontalHeaderItem(1);
        ___qtablewidgetitem76->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidgetstudy->horizontalHeaderItem(2);
        ___qtablewidgetitem77->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidgetstudy->horizontalHeaderItem(3);
        ___qtablewidgetitem78->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidgetstudy->horizontalHeaderItem(4);
        ___qtablewidgetitem79->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidgetstudy->horizontalHeaderItem(5);
        ___qtablewidgetitem80->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidgetstudy->horizontalHeaderItem(6);
        ___qtablewidgetitem81->setText(QCoreApplication::translate("SecondDialog", "\345\221\250\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidgetstudy->verticalHeaderItem(0);
        ___qtablewidgetitem82->setText(QCoreApplication::translate("SecondDialog", "08\357\274\23200-09\357\274\23240", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidgetstudy->verticalHeaderItem(1);
        ___qtablewidgetitem83->setText(QCoreApplication::translate("SecondDialog", "10\357\274\23200-11\357\274\23240", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidgetstudy->verticalHeaderItem(2);
        ___qtablewidgetitem84->setText(QCoreApplication::translate("SecondDialog", "12\357\274\23200-13\357\274\23240", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidgetstudy->verticalHeaderItem(3);
        ___qtablewidgetitem85->setText(QCoreApplication::translate("SecondDialog", "14\357\274\23200-15\357\274\23240", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidgetstudy->verticalHeaderItem(4);
        ___qtablewidgetitem86->setText(QCoreApplication::translate("SecondDialog", "16\357\274\23200-17\357\274\23240", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidgetstudy->verticalHeaderItem(5);
        ___qtablewidgetitem87->setText(QCoreApplication::translate("SecondDialog", "18\357\274\23230-20\357\274\23210", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidgetstudy->verticalHeaderItem(6);
        ___qtablewidgetitem88->setText(QCoreApplication::translate("SecondDialog", "20\357\274\23220-22\357\274\23200", nullptr));
        label->setText(QCoreApplication::translate("SecondDialog", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("SecondDialog", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("SecondDialog", "\344\273\243\345\212\236\344\272\213\351\241\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
