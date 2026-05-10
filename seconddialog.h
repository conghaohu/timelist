#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSplitter>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QFrame>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QMap>
#include <QTime>
#include <QColor>
#include <QSpinBox>
#include <QTimer>
#include <QSet>

namespace Ui { class SecondDialog; }

//存一个任务的数据
struct taskinfo {
    QTime t1;     //开始时间
    QTime t2;     //结束时间
    QString thing;//待办事项
    int val = 1;  //权重
};

//主窗口
class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = nullptr);
    ~SecondDialog();

private slots:
    void addrow();//工作图表加行
    void exportdata();//导出表格
    void openset();//打开设置
    void checktip();//检查提醒
    void gohome();//回登录页
    void showcal();//弹出日历
    void updatetime();//刷新时间

private:
    Ui::SecondDialog *ui;

    QMap<QString, taskinfo> alldata;//所有任务数据

    QTableWidget *nowtbl = nullptr;//当前点的表格
    int nowrow = -1;//当前点的行
    int nowcol = -1;//当前点的列

    QSpinBox *wtbox = nullptr;//权重输入框
    QPushButton *savebtn = nullptr;//保存按钮
    QPushButton *resetbtn = nullptr;//重置按钮

    void initrow(QTableWidget *tbl, const QTime &t);//给表格加一行
    QString makekey(QTableWidget *t, int r, int c) const;//生成格子唯一ID
    QColor colbywt(int w) const;//权重对应的颜色
    void loadcell(QTableWidget *t, int r, int c);//点格子加载数据
    void savetask();//保存到表格
    void clearform();//清空
    void useset();//应用设置

    QTimer *timetip = nullptr;//提醒用的定时器
    QSet<QString> noted;//已经提醒过的任务

    QLabel *nowtime = nullptr;//顶栏显示时间
    QTimer *time = nullptr;//刷新时间的定时器
};

#endif // SECONDDIALOG_H
