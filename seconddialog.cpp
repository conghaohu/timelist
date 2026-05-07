#include "seconddialog.h"//第二窗口头文件
#include "ui_seconddialog.h"//ui界面头文件
#include <QMenu>//菜单
#include <QTableWidgetItem>//表格项
#include <QLineEdit>//单行输入框
#include <QAbstractItemView>//抽象视图
#include <QTimeEdit>//时间编辑
#include <QVBoxLayout>//垂直布局
#include <QPushButton>//按钮
#include <QLabel>//标签
#include <QSpinBox>//数字选择框

//第二窗口构造函数
SecondDialog::SecondDialog(QWidget *parent)
    : QDialog(parent)//父类构造函数
    , ui(new Ui::SecondDialog)//创建ui对象
{
    ui->setupUi(this);//初始化界面

    QPixmap p(":/resource/img/settings.png");//加载设置图标
    ui->set->setPixmap(p);//设置设置图标
    QPixmap p2(":/resource/img/arrow-up-from-line.png");
    ui->out->setPixmap(p2);//设置上传图标

    //设置最左侧栏的按键
    ui->listWidget->addItem("日视图");
    ui->listWidget->addItem("周视图");
    ui->listWidget->addItem("月视图");
    ui->listWidget->addItem("工作图表");
    ui->listWidget->addItem("学习图表");
    ui->listWidget->addItem("生活图表");

    connect(ui->listWidget, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
        int a = ui->listWidget->row(item);
        ui->stackedWidget->setCurrentIndex(a);
    });//实现每个按键对应一个图表

    connect(ui->addrow, &QPushButton::clicked, this, &SecondDialog::addrow);//实现点击添加行按钮，增加一行

    QLabel *wl = new QLabel("权重", ui->widgetright);//设置权重按钮
    wl->setGeometry(10, 190, 54, 16);//设置位置和大小

    wtBox = new QSpinBox(ui->widgetright);//在右侧栏添加权重按键
    wtBox->setGeometry(0, 210, 81, 24);//权重表格样式
    wtBox->setRange(1, 10);//设计权重范围
    wtBox->setValue(1);//设计权重初始值
    wtBox->setToolTip("任务权重/优先级 (1-10)");//设置提示信息

    saveBtn = new QPushButton("保存任务", ui->widgetright);//右侧栏添加保存任务按键
    saveBtn->setGeometry(0, 250, 81, 24);//设置保存按钮位置

    resetBtn = new QPushButton("重置", ui->widgetright);//右侧栏添加重置按键
    resetBtn->setGeometry(0, 290, 81, 24);//设置重置按钮位置

    connect(saveBtn, &QPushButton::clicked, this, &SecondDialog::saveTask);//保存任务按键触发
    connect(resetBtn, &QPushButton::clicked, this, &SecondDialog::clearForm);//重置按键触发

    QList<QTableWidget*> tbls = {
        ui->tableWidgetday, ui->tableWidgetweek, ui->tableWidgetmonth,
        ui->tableWidgetstudy, ui->tableWidgetwork
    };//左侧栏五种按键
    for (QTableWidget *t : tbls) {
        connect(t, &QTableWidget::cellClicked, this, [this, t](int r, int c) {
            loadCell(t, r, c);//点击单元格加载数据
        });
    }//为每个表格绑定点击事件

    QStringList headers = {"时间","周一","周二","周三","周四","周五","周六","周日"};//设置列表头

    ui->tableWidgetday->setColumnCount(8);//设计表格样式
    ui->tableWidgetday->setHorizontalHeaderLabels(headers);//填充表格
    ui->tableWidgetday->setRowCount(0);//初始化表格行数为0
    for (int h = 0; h < 24; h++)
        initRow(ui->tableWidgetday, QTime(h, 0));//填充每行的行表头为timeedit

    ui->tableWidgetweek->setColumnCount(8);//设计表格样式
    ui->tableWidgetweek->setHorizontalHeaderLabels(headers);//填充表格
    ui->tableWidgetweek->setRowCount(0);//初始化表格行数为0
    for (int h = 0; h < 24; h++)
        initRow(ui->tableWidgetweek, QTime(h, 0));//填充每行的行表头为timeedit

    ui->tableWidgetstudy->setColumnCount(8);//设计表格样式
    ui->tableWidgetstudy->setHorizontalHeaderLabels(headers);//填充表格
    ui->tableWidgetstudy->setRowCount(0);//初始化表格行数为0
    QTime studySlots[] = {//学习图表的固定时间段
        QTime(8,0), QTime(10,0), QTime(12,0), QTime(14,0),
        QTime(16,0), QTime(18,30), QTime(20,20)
    };
    for (const QTime &t : studySlots)
        initRow(ui->tableWidgetstudy, t);//初始化学习图表行
}

SecondDialog::~SecondDialog()
{
    delete ui;//释放界面资源
}

//添加行函数的实现
void SecondDialog::addrow()
{
    int r = ui->tableWidgetwork->rowCount();//获取当前行数
    ui->tableWidgetwork->setRowCount(r + 1);//自动加一

    QTimeEdit *te = new QTimeEdit(QTime(8, 0), this);//添加的第一行的初始化
    te->setDisplayFormat("hh:mm");
    te->setTimeRange(QTime(0, 0), QTime(23, 59));//划定时间范围
    ui->tableWidgetwork->setCellWidget(r, 0, te);//把timeedit嵌入到表格中
    ui->tableWidgetwork->setRowHeight(r, 40);//设置添加行的高度
}
//初始化表格行函数
void SecondDialog::initRow(QTableWidget *tbl, const QTime &t)
{
    int r = tbl->rowCount();//获取当前行数
    tbl->setRowCount(r + 1);//增加一行
    QTimeEdit *te = new QTimeEdit(t, this);//创建时间编辑控件
    te->setDisplayFormat("hh:mm");//设置时间格式
    te->setTimeRange(QTime(0, 0), QTime(23, 59));//划定时间范围
    tbl->setCellWidget(r, 0, te);//将时间控件嵌入第0列
    tbl->setRowHeight(r, 40);//设置行高
}

//生成单元格唯一键值
QString SecondDialog::key_(QTableWidget *t, int r, int c) const
{
    return t->objectName() + "_" + QString::number(r) + "_" + QString::number(c);//格式：表名_行_列
}

//加载单元格数据到右侧栏
void SecondDialog::loadCell(QTableWidget *t, int r, int c)
{
    curTbl = t;//记录当前表格
    curRow = r;//记录当前行
    curCol = c;//记录当前列

    QString k = key_(t, r, c);//生成键值

    if (tasks_.contains(k)) {//如果已有数据
        TaskData &d = tasks_[k];
        ui->startTimeEdit->setTime(d.st);//加载开始时间
        ui->endTimeEdit->setTime(d.et);//加载结束时间
        ui->todoEdit->setText(d.todo);//加载待办事项
        wtBox->setValue(d.wt);//加载权重
    }
    else {//如果没有数据
        QTableWidgetItem *it = t->item(r, c);
        if (it && !it->text().isEmpty()) {
            ui->todoEdit->setText(it->text());//从单元格文字加载
        } else {
            ui->todoEdit->clear();//清空输入框
        }
        QTimeEdit *te = qobject_cast<QTimeEdit*>(t->cellWidget(r, 0));
        if (te) ui->startTimeEdit->setTime(te->time());//获取时间控件的时间
        ui->endTimeEdit->setTime(QTime(0, 0));//结束时间默认0点
        wtBox->setValue(1);//权重默认为1
    }
}

//保存当前任务到表格
void SecondDialog::saveTask()
{
    if (!curTbl || curRow < 0 || curCol < 0) return;//未选中单元格则退出

    QString k = key_(curTbl, curRow, curCol);//生成键值

    TaskData d;//创建数据对象
    d.st = ui->startTimeEdit->time();//获取开始时间
    d.et = ui->endTimeEdit->time();//获取结束时间
    d.todo = ui->todoEdit->text();//获取待办事项
    d.wt = wtBox->value();//获取权重值

    tasks_[k] = d;//存入数据映射

    QString txt = d.todo;
    if (d.wt > 1) txt += QString(" [%1]").arg(d.wt);//权重大于1时显示

    QTableWidgetItem *it = curTbl->item(curRow, curCol);
    if (!it) {
        it = new QTableWidgetItem(txt);//创建新表格项
        curTbl->setItem(curRow, curCol, it);
    } else {
        it->setText(txt);//更新已有表格项
    }
    //设置提示信息
    QString tip = QString("任务: %1\n开始: %2\n结束: %3\n权重: %4")
        .arg(d.todo)
        .arg(d.st.toString("hh:mm"))
        .arg(d.et.toString("hh:mm"))
        .arg(d.wt);
    it->setToolTip(tip);//显示完整信息
    it->setBackground(QBrush(wtColor(d.wt)));//根据权重设置背景色
}
//根据权重值调节空格颜色
QColor SecondDialog::wtColor(int w) const
{
    switch (w) {
    case 1:  return QColor(200, 230, 201);//淡绿
    case 2:  return QColor(165, 214, 167);//浅绿
    case 3:  return QColor(179, 229, 252);//浅蓝
    case 4:  return QColor(129, 212, 250);//天蓝
    case 5:  return QColor(255, 245, 157);//淡黄
    case 6:  return QColor(255, 241, 118);//明黄
    case 7:  return QColor(255, 204, 128);//浅橙
    case 8:  return QColor(255, 171, 145);//桃红
    case 9:  return QColor(239, 154, 154);//浅粉
    case 10: return QColor(229, 115, 115);//深粉
    default: return QColor(255, 255, 255);//白色
    }
}
//清除表格内容函数
void SecondDialog::clearForm()
{
    if (curTbl && curRow >= 0 && curCol >= 0) {
        QString k = key_(curTbl, curRow, curCol);//生成键值
        tasks_.remove(k);//移除数据

        QTableWidgetItem *it = curTbl->item(curRow, curCol);
        if (it) {
            it->setBackground(QBrush(Qt::white));//恢复白色背景
            it->setText("");//清空文字
            it->setToolTip("");//清空提示
        }
    }

    ui->todoEdit->clear();//代办事项清空
    ui->startTimeEdit->setTime(QTime(8, 0));//重置开始时间
    ui->endTimeEdit->setTime(QTime(9, 0));//重置结束时间
    wtBox->setValue(1);//重置权重

    curTbl = nullptr;//清空当前表格记录
    curRow = -1;//清空当前行记录
    curCol = -1;//清空当前列记录
}
