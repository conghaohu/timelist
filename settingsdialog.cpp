#include "settingsdialog.h"
#include <QVBoxLayout>   //垂直布局
#include <QFormLayout>   //表单布局
#include <QDialogButtonBox>//对话框按钮
#include <QSettings>     //设置读写

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("设置");
    setFixedSize(300, 280);//固定窗口大小

    auto *form = new QFormLayout;//表单布局
    //设置初始视图选项
    view = new QComboBox;
    view->addItems({"日视图", "周视图", "月视图", "工作图表", "学习图表", "生活图表"});
    form->addRow("默认视图", view);
    //设置表格配色选项
    theme = new QComboBox;
    theme->addItems({"淡蓝", "海洋蓝", "森林绿", "落日橙", "白色"});
    form->addRow("表格配色", theme);
    //设置初始权重选项
    wt = new QSpinBox;
    wt->setRange(1, 10);
    form->addRow("默认权重", wt);
    //设置字体选项
    fontsize = new QSpinBox;
    fontsize->setRange(8, 24);
    form->addRow("字体大小", fontsize);
    //设置任务提醒选项
    remind = new QCheckBox("启用任务提醒");
    form->addRow(remind);

    auto *btns = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);//确定取消按钮
    connect(btns, &QDialogButtonBox::accepted, this, &SettingsDialog::dosave);
    connect(btns, &QDialogButtonBox::rejected, this, &QDialog::reject);

    auto *layout = new QVBoxLayout(this);//主布局
    layout->addLayout(form);
    layout->addWidget(btns);

    //从配置文件读取上次的设置
    QSettings s("TimeList", "TimeList");
    view->setCurrentIndex(s.value("defaultView", 0).toInt());
    theme->setCurrentIndex(s.value("colorTheme", 0).toInt());
    wt->setValue(s.value("defaultWeight", 1).toInt());
    fontsize->setValue(s.value("fontSize", 9).toInt());
    remind->setChecked(s.value("reminderEnabled", false).toBool());
}

//保存设置到配置文件
void SettingsDialog::dosave()
{
    QSettings s("TimeList", "TimeList");
    s.setValue("defaultView", view->currentIndex());
    s.setValue("colorTheme", theme->currentIndex());
    s.setValue("defaultWeight", wt->value());
    s.setValue("fontSize", fontsize->value());
    s.setValue("reminderEnabled", remind->isChecked());
    accept();
}
