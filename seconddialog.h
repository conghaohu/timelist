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
};

#endif // SECONDDIALOG_H
