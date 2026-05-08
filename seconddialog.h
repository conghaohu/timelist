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

namespace Ui { class SecondDialog; }//ui命名空间

//最右侧栏包含内容
struct TaskData {
    QTime st;//开始时间
    QTime et;//结束时间
    QString todo;//待办事项
    int wt = 1;//初始权重
};

//第二窗口类
class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = nullptr);//构造函数
    ~SecondDialog();//析构函数

private slots:
    void addrow();//工作图表所需添加行函数
    void exportData();//导出数据
    void openset();//打开设置
    void checktip();//检查任务提醒
    void gohome();//回到登录页
    void showcal();//弹出日历
    void updatetime();//刷新时间显示

private:
    Ui::SecondDialog *ui;//界面指针

    QMap<QString, TaskData> tasks_;//存储表格数据

    QTableWidget *curTbl = nullptr;//当前点击的表格
    int curRow = -1;//当前点击的行
    int curCol = -1;//当前点击的列

    QSpinBox *wtBox = nullptr;//调整权重的pushButton
    QPushButton *saveBtn = nullptr;//保存任务的pushButton
    QPushButton *resetBtn = nullptr;//重置的pushButton

    void initRow(QTableWidget *tbl, const QTime &t);//初始化行函数
    QString key_(QTableWidget *t, int r, int c) const;//生成单元格键值
    QColor wtColor(int w) const;//根据权重调整空格颜色函数
    void loadCell(QTableWidget *t, int r, int c);//加载单元格数据
    void saveTask();//保存任务函数
    void clearForm();//清空窗口函数
    void useset();//应用设置

    QTimer *timetip = nullptr;//提醒定时器
    QSet<QString> noted;//已提醒的任务键值

    QLabel *nowtime = nullptr;//当前时间
    QTimer *timetr = nullptr;//时间刷新定时器
};

#endif // SECONDDIALOG_H
