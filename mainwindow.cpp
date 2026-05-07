#include "mainwindow.h"//主窗口头文件
#include "ui_mainwindow.h"//ui界面头文件
#include <QMessageBox>//消息框
#include <QPalette>//调色板
#include <QPixmap>//图片

//主窗口构造函数
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//初始化界面

    connect(ui->login, &QPushButton::clicked, this, &MainWindow::doLogin);//获取按键信息

    QPixmap bg(":/resource/img/background.jpg");//加载背景图片
    QPixmap scaled = bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);//自适应缩放
    QPalette p;//调色板对象
    p.setBrush(QPalette::Window, scaled);//设置背景
    this->setPalette(p);//设置背景图片

    QPixmap ux(":/resource/img/lock.png");
    ui->password->setPixmap(ux);//设置用户名图标
    QPixmap ux2(":/resource/img/user.png");
    ui->username->setPixmap(ux2);//设置密码图标
}

MainWindow::~MainWindow()
{
    delete ui;//释放界面资源
}

//登录所需函数
void MainWindow::doLogin()
{
    QString usr = ui->lineEdit_username->text();//获取用户名
    QString pwd = ui->lineEdit_password->text();//获取密码

    if (usr == "test" && pwd == "test") {
        QMessageBox::information(this, "Login", "Welcome to TimeList");//登录成功提示
        hide();//隐藏登录窗口
        secWin = new SecondDialog(this);//创建第二窗口
        secWin->show();//显示登录成功界面
    } else {
        QMessageBox::warning(this, "Login", "username and password is not correct");//显示登录失败界面
    }
}
