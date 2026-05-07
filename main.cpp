#include "mainwindow.h"//包含主窗口头文件
#include <QApplication>//包含应用程序类

//程序主入口
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);//创建应用程序对象
    MainWindow win;//实例化窗口
    win.show();//显示窗口
    return app.exec();//进入消息循环
}
