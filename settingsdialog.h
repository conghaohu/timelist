#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QSpinBox>
#include <QCheckBox>

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = nullptr);

private slots:
    void dosave();//保存设置

private:
    QComboBox *view;//默认视图
    QComboBox *theme;//配色主题
    QSpinBox *wt;//默认权重
    QSpinBox *fontsize;//字体大小
    QCheckBox *remind;//开启提醒
};

#endif // SETTINGSDIALOG_H
