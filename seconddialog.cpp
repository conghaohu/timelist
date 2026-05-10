#include "seconddialog.h"
#include "ui_seconddialog.h"
#include <QMenu>          //菜单
#include <QTableWidgetItem>//表格项
#include <QLineEdit>      //输入框
#include <QAbstractItemView>//抽象视图
#include <QTimeEdit>      //时间编辑控件
#include <QVBoxLayout>    //垂直布局
#include <QPushButton>    //按钮
#include <QLabel>         //标签
#include <QSpinBox>       //数字输入框
#include <QFileDialog>    //文件对话框
#include <QSettings>      //设置存储
#include <QMessageBox>    //消息弹窗
#include <QCalendarWidget>//日历控件
#include <QDateTime>      //日期时间
#include "settingsdialog.h"//设置窗口


SecondDialog::SecondDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecondDialog)
{
    ui->setupUi(this);//加载UI界面
    setStyleSheet("background-color: rgb(235, 235, 235);");//整体灰底

    //放设置图标
    QPixmap p(":/resource/img/settings.png");
    ui->set->setPixmap(p);
    //放导出图标
    QPixmap p2(":/resource/img/arrow-up-from-line.png");
    ui->out->setPixmap(p2);

    //左边导航栏加六个选项
    ui->listWidget->addItem("日视图");
    ui->listWidget->addItem("周视图");
    ui->listWidget->addItem("月视图");
    ui->listWidget->addItem("工作图表");
    ui->listWidget->addItem("学习图表");
    ui->listWidget->addItem("生活图表");
    ui->listWidget->setStyleSheet(
        "QListWidget { background-color: rgb(232, 240, 254); }"
        "QListWidget::item { background: transparent; color: rgb(30, 30, 30); }"
        "QListWidget::item:selected { background: rgb(180, 210, 240); color: black; }"
    );//左侧背景色

    //点左边导航栏切换中间页面
    connect(ui->listWidget, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
        int a = ui->listWidget->row(item);
        ui->stackedWidget->setCurrentIndex(a);
    });

    //工作图表的加行按钮
    connect(ui->addrow, &QPushButton::clicked, this, &SecondDialog::addrow);

    //右侧栏：权重标签
    QLabel *wl = new QLabel("权重", ui->widgetright);
    wl->setGeometry(10, 190, 54, 16);

    //右侧栏：权重输入
    wtbox = new QSpinBox(ui->widgetright);
    wtbox->setGeometry(0, 210, 81, 24);
    wtbox->setRange(1, 10);
    wtbox->setValue(1);
    wtbox->setToolTip("权重越高越重要 (1-10)");

    //右侧栏：保存按钮
    savebtn = new QPushButton("保存任务", ui->widgetright);
    savebtn->setGeometry(0, 250, 81, 24);

    //右侧栏：重置按钮
    resetbtn = new QPushButton("重置", ui->widgetright);
    resetbtn->setGeometry(0, 290, 81, 24);

    //按钮绑定功能
    connect(savebtn, &QPushButton::clicked, this, &SecondDialog::savetask);
    connect(resetbtn, &QPushButton::clicked, this, &SecondDialog::clearform);
    connect(ui->outting, &QPushButton::clicked, this, &SecondDialog::exportdata);
    connect(ui->setting, &QPushButton::clicked, this, &SecondDialog::openset);
    connect(ui->first, &QPushButton::clicked, this, &SecondDialog::gohome);
    connect(ui->calender, &QPushButton::clicked, this, &SecondDialog::showcal);

    //顶栏显示当前时间
    nowtime = new QLabel(ui->widget);
    nowtime->setGeometry(180, 10, 70, 20);
    nowtime->setStyleSheet("font: 700 9pt 'Microsoft YaHei UI'; color: rgb(0,0,0); background: transparent;");
    //每秒刷新一次时间
    time = new QTimer(this);
    connect(time, &QTimer::timeout, this, &SecondDialog::updatetime);
    time->start(1000);
    updatetime();

    //把所有表格的点击事件绑上
    QList<QTableWidget*> tbls = {
        ui->tableWidgetday, ui->tableWidgetweek, ui->tableWidgetmonth,
        ui->tableWidgetstudy, ui->tableWidgetwork
    };
    for (QTableWidget *t : tbls) {
        connect(t, &QTableWidget::cellClicked, this, [this, t](int r, int c) {
            loadcell(t, r, c);
        });
    }

    //表头
    QStringList headers = {"时间","周一","周二","周三","周四","周五","周六","周日"};

    //日视图
    ui->tableWidgetday->setColumnCount(2);
    ui->tableWidgetday->setHorizontalHeaderLabels({"时间", "任务"});
    ui->tableWidgetday->setRowCount(0);
    for (int i = 0; i < 24; i++)
        initrow(ui->tableWidgetday, QTime(i, 0));

    //周视图
    ui->tableWidgetweek->setColumnCount(8);
    ui->tableWidgetweek->setHorizontalHeaderLabels(headers);
    ui->tableWidgetweek->setRowCount(0);
    for (int i = 0; i < 24; i++)
        initrow(ui->tableWidgetweek, QTime(i, 0));

    //学习图表
    ui->tableWidgetstudy->setColumnCount(8);
    ui->tableWidgetstudy->setHorizontalHeaderLabels(headers);
    ui->tableWidgetstudy->setRowCount(0);
    QTime study[] = {
        QTime(8,0), QTime(10,0), QTime(12,0), QTime(14,0),
        QTime(16,0), QTime(18,30), QTime(20,20)
    };
    for (const QTime &t : study)
        initrow(ui->tableWidgetstudy, t);

    useset();
}

SecondDialog::~SecondDialog()
{
    delete ui;//释放界面资源
}

//工作图表
void SecondDialog::addrow()
{
    int a = ui->tableWidgetwork->rowCount();
    ui->tableWidgetwork->setRowCount(a + 1);//表格加一行

    QTimeEdit *te = new QTimeEdit(QTime(8, 0), this);//建一个时间控件
    te->setDisplayFormat("hh:mm");//显示格式
    te->setTimeRange(QTime(0, 0), QTime(23, 59));//允许范围

    ui->tableWidgetwork->setCellWidget(a, 0, te);//放进第0列
    ui->tableWidgetwork->setRowHeight(a, 40);//行高
}

//给表格加一行，第0列放时间选择器
void SecondDialog::initrow(QTableWidget *tbl, const QTime &t)
{
    int a = tbl->rowCount();
    tbl->setRowCount(a + 1);
    QTimeEdit *te = new QTimeEdit(t, this);//新建时间控件
    te->setDisplayFormat("hh:mm");
    te->setTimeRange(QTime(0, 0), QTime(23, 59));
    tbl->setCellWidget(a, 0, te);//塞到第0列
    tbl->setRowHeight(a, 40);
}

//给每个格子一个唯一ID，格式：表名_行号_列号
QString SecondDialog::makekey(QTableWidget *t, int r, int c) const
{
    return t->objectName() + "_" + QString::number(r) + "_" + QString::number(c);
}

//点击格子，把数据加载到右侧编辑栏
void SecondDialog::loadcell(QTableWidget *t, int r, int c)
{
    nowtbl = t;//记住当前点的是哪个表
    nowrow = r;//哪行
    nowcol = c;//哪列

    QString k = makekey(t, r, c);

    if (alldata.contains(k)) {
        //这个格子有数据，直接显示
        taskinfo &d = alldata[k];
        ui->startTimeEdit->setTime(d.t1);
        ui->endTimeEdit->setTime(d.t2);
        ui->todoEdit->setText(d.thing);
        wtbox->setValue(d.val);
    }
    else {
        //没数据就看看格子里有没有字
        QTableWidgetItem *it = t->item(r, c);
        if (it && !it->text().isEmpty()) {
            ui->todoEdit->setText(it->text());
        }
        else {
            ui->todoEdit->clear();
        }
        //从第0列的时间控件取时间
        QTimeEdit *te = qobject_cast<QTimeEdit*>(t->cellWidget(r, 0));
        if (te) {
            ui->startTimeEdit->setTime(te->time());
            ui->endTimeEdit->setTime(te->time().addSecs(3600));
        }
        wtbox->setValue(1);
    }
}

//把右侧栏填的内容存到格子里
void SecondDialog::savetask()
{
    //没点格子就不管
    if (!nowtbl || nowrow < 0 || nowcol < 0) return;

    //这个格子的唯一ID
    QString k = makekey(nowtbl, nowrow, nowcol);

    //从右侧栏读数据
    taskinfo d;
    d.t1 = ui->startTimeEdit->time();  //开始时间
    d.t2 = ui->endTimeEdit->time();    //结束时间
    d.thing = ui->todoEdit->text();    //干啥
    d.val = wtbox->value();            //权重

    //存到数据表里
    alldata[k] = d;

    //表格里显示的字：任务内容，权重大于1就标上
    QString txt = d.thing;
    if (d.val > 1) txt += QString(" [%1]").arg(d.val);

    //拿到表格里的格子，没有就新建
    QTableWidgetItem *it = nowtbl->item(nowrow, nowcol);
    if (!it) {
        it = new QTableWidgetItem(txt);
        nowtbl->setItem(nowrow, nowcol, it);
    }
    else {
        it->setText(txt);
    }

    //鼠标放上去显示完整信息
    QString tip = QString("任务: %1\n开始: %2\n结束: %3\n权重: %4")
        .arg(d.thing)
        .arg(d.t1.toString("hh:mm"))
        .arg(d.t2.toString("hh:mm"))
        .arg(d.val);
    it->setToolTip(tip);

    //根据权重上色，越重颜色越深
    it->setBackground(QBrush(colbywt(d.val)));
}

//权重转颜色，1最浅10最深
QColor SecondDialog::colbywt(int w) const
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

//把当前表格导出成CSV，方便用Excel打开
void SecondDialog::exportdata()
{
    //找到当前正在看的页面
    QWidget *page = ui->stackedWidget->currentWidget();
    if (!page) return;

    //从页面里找到表格
    QTableWidget *tbl = page->findChild<QTableWidget*>();
    if (!tbl) return;

    //弹出保存对话框，让用户选位置
    QString filepath = QFileDialog::getSaveFileName(this, "导出表格为CSV", "table.csv", "CSV (*.csv)");
    if (filepath.isEmpty())
        return;//用户取消就退出

    //打开文件
    QFile file(filepath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//写入文本
    //加BOM，不然Excel打开中文会乱码
    out << QChar(0xFEFF);

    int cols = tbl->columnCount();//有几列
    int rows = tbl->rowCount();   //有几行

    //先写列名
    QStringList header;
    for (int i = 0; i < cols; ++i) {
        QTableWidgetItem *h = tbl->horizontalHeaderItem(i);
        header << (h ? h->text() : QString());
    }
    out << header.join(",") << "\n";

    //再一行行写数据
    for (int r = 0; r < rows; ++r) {
        QStringList row;
        for (int c = 0; c < cols; ++c) {
            //第0列是时间控件，取里面的时间值
            QTimeEdit *te = qobject_cast<QTimeEdit*>(tbl->cellWidget(r, c));
            if (te) {
                row << te->time().toString("hh:mm");
                continue;
            }
            //其他列直接取格子里的文字
            QTableWidgetItem *it = tbl->item(r, c);
            QString val = it ? it->text() : QString();
            //如果内容里有逗号或引号，得用引号包起来
            if (val.contains(',') || val.contains('"'))
                val = "\"" + val.replace("\"", "\"\"") + "\"";
            row << val;
        }
        out << row.join(",") << "\n";
    }

    file.close();//关闭文件
}

//清除右侧栏和格子的数据
void SecondDialog::clearform()
{
    if (nowtbl && nowrow >= 0 && nowcol >= 0) {//有选中格子才清
        QString k = makekey(nowtbl, nowrow, nowcol);
        alldata.remove(k);//从数据表里删掉

        QTableWidgetItem *it = nowtbl->item(nowrow, nowcol);
        if (it) {
            it->setBackground(QBrush());//恢复表格默认背景
            it->setText("");//清文字
            it->setToolTip("");//清提示
        }
    }

    //右侧栏全部重置
    ui->todoEdit->clear();
    ui->startTimeEdit->setTime(QTime(8, 0));
    ui->endTimeEdit->setTime(QTime(9, 0));
    wtbox->setValue(1);

    //清掉当前选中的格子记录
    nowtbl = nullptr;
    nowrow = -1;
    nowcol = -1;
}

//打开设置窗口
void SecondDialog::openset()
{
    SettingsDialog dlg(this);
    if (dlg.exec() == QDialog::Accepted)
        useset();
}

//使用设置里的选项的函数
void SecondDialog::useset()
{
    QSettings s("TimeList", "TimeList");

    //默认显示哪个视图
    ui->stackedWidget->setCurrentIndex(s.value("defaultView", 0).toInt());

    //默认权重
    wtbox->setValue(s.value("defaultWeight", 1).toInt());

    //字体大小
    int fs = s.value("fontSize", 9).toInt();
    QList<QTableWidget*> tbls = {
        ui->tableWidgetday, ui->tableWidgetweek, ui->tableWidgetmonth,
        ui->tableWidgetstudy, ui->tableWidgetwork
    };
    for (QTableWidget *t : tbls)
        t->setFont(QFont("Microsoft YaHei UI", fs));

    //表格配色
    int ct = s.value("colorTheme", 0).toInt();
    QColor bg;
    switch (ct) {
    case 1: // 海洋蓝
        bg = QColor(0, 119, 190);
        break;
    case 2: // 森林绿
        bg = QColor(46, 125, 50);
        break;
    case 3: // 落日橙
        bg = QColor(230, 126, 34);
        break;
    case 4: // 白色
        bg = QColor(255, 255, 255);
        break;
    default: // 淡蓝
        bg = QColor(227, 242, 253);
    }
    QString sheet = QString("background-color: %1;").arg(bg.name());
    ui->day->setStyleSheet(sheet);
    ui->week->setStyleSheet(sheet);
    ui->month->setStyleSheet(sheet);
    ui->study->setStyleSheet(sheet);
    ui->work->setStyleSheet(sheet);
    ui->tableWidgetstudy->setStyleSheet(sheet);
    ui->tableWidgetwork->setStyleSheet(sheet);
    ui->tableWidgetmonth->setStyleSheet(sheet);

    //时间控件跟着表格配色走
    QList<QTableWidget*> tbls2 = {
        ui->tableWidgetday, ui->tableWidgetweek, ui->tableWidgetmonth,
        ui->tableWidgetstudy, ui->tableWidgetwork
    };
    for (QTableWidget *t : tbls2) {
        for (int r = 0; r < t->rowCount(); ++r) {
            QTimeEdit *te = qobject_cast<QTimeEdit*>(t->cellWidget(r, 0));
            if (te) te->setStyleSheet(QString("background-color: %1; border: 1px solid %2;").arg(bg.name()).arg(bg.darker(115).name()));
        }
    }

    //任务提醒开关
    bool rem = s.value("reminderEnabled", false).toBool();
    if (rem) {
        if (!timetip) {
            timetip = new QTimer(this);
            connect(timetip, &QTimer::timeout, this, &SecondDialog::checktip);
        }
        timetip->start(30000);
    }
    else {
        if (timetip)
            timetip->stop();
    }
}

//到点弹窗提醒
void SecondDialog::checktip()
{
    QTime now = QTime::currentTime();
    for (auto it = alldata.begin(); it != alldata.end(); ++it) {
        const taskinfo &d = it.value();
        //当前小时分钟跟任务的结束时间对上了
        if (d.t2.hour() == now.hour() && d.t2.minute() == now.minute()) {
            //还没提醒过才弹窗
            if (!noted.contains(it.key())) {
                noted.insert(it.key());
                QMessageBox::information(this, "任务提醒",
                    QString("任务「%1」到点啦 (%2)").arg(d.thing).arg(d.t2.toString("hh:mm")));
            }
        }
    }
    //每分钟清一次，这样下一分钟还能再提醒
    if (now.second() == 0) noted.clear();
}

//回到登录页
void SecondDialog::gohome()
{
    hide();
    if (parentWidget())
        parentWidget()->show();
}

//弹出日历
void SecondDialog::showcal()
{
    QDialog dlg(this);
    dlg.setWindowTitle("日历");
    dlg.setFixedSize(320, 250);
    auto *cal = new QCalendarWidget(&dlg);
    cal->setGeometry(10, 10, 300, 200);
    auto *ok = new QPushButton("确定", &dlg);
    ok->setGeometry(130, 220, 60, 24);
    connect(ok, &QPushButton::clicked, &dlg, &QDialog::accept);
    dlg.exec();
}

//刷新顶栏的时间显示
void SecondDialog::updatetime()
{
    nowtime->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
}
