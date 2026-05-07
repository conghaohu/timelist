#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "seconddialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void doLogin();//登录函数

private:
    Ui::MainWindow *ui;//界面指针
    SecondDialog *secWin;//第二窗口指针
};
#endif // MAINWINDOW_H
