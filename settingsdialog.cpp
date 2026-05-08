#include "settingsdialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QSettings>

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("设置");
    setFixedSize(300, 280);

    auto *form = new QFormLayout;

    view = new QComboBox;
    view->addItems({"日视图", "周视图", "月视图", "工作图表", "学习图表", "生活图表"});
    form->addRow("默认视图", view);

    theme = new QComboBox;
    theme->addItems({"默认", "海洋蓝", "森林绿", "落日橙"});
    form->addRow("表格配色", theme);

    wt = new QSpinBox;
    wt->setRange(1, 10);
    form->addRow("默认权重", wt);

    fontsize = new QSpinBox;
    fontsize->setRange(8, 24);
    form->addRow("字体大小", fontsize);

    remind = new QCheckBox("启用任务提醒");
    form->addRow(remind);

    auto *btns = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(btns, &QDialogButtonBox::accepted, this, &SettingsDialog::dosave);
    connect(btns, &QDialogButtonBox::rejected, this, &QDialog::reject);

    auto *layout = new QVBoxLayout(this);
    layout->addLayout(form);
    layout->addWidget(btns);

    QSettings s("TimeList", "TimeList");
    view->setCurrentIndex(s.value("defaultView", 0).toInt());
    theme->setCurrentIndex(s.value("colorTheme", 0).toInt());
    wt->setValue(s.value("defaultWeight", 1).toInt());
    fontsize->setValue(s.value("fontSize", 9).toInt());
    remind->setChecked(s.value("reminderEnabled", false).toBool());
}

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
