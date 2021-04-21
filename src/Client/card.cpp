#include "mainwindow.h"
#include "card.h"
#include "ui_card.h"
#include <QInputDialog>
#include <QListWidget>
#include <QMessageBox>

QString settingspath;
int AScooldown;

Card::Card(QWidget *parent) : QMainWindow(parent), ui(new Ui::Card)
{
    ui->setupUi(this);
    QTimer::singleShot(50, this, SLOT(upload()));
    ui->timechoice->setVisible(false);
}

Card::~Card()
{
    delete ui;
}


void Card::on_saveButton_clicked()
{
    QFile fileSet(settingspath);
    if ((fileSet.exists()) && fileSet.open(QIODevice::WriteOnly))
    {
        if (ui->ch_autosave->isChecked())
            fileSet.write("1 + \r\n");
        else fileSet.write("0 + \r\n");
    }

    QString num = QString::number(AScooldown);
    fileSet.write(num.toUtf8());
    QMessageBox::about(this, "Внимание!", "Для применения изменений перезапустите программу");
}

void Card::receiveData(QString path)
{
    settingspath = path;
}

void Card::upload()
{
    settingspath.remove(settingspath.length() - 8, 8);
    settingspath += "settings.txt";
    QFile fileSet(settingspath);
        if ((fileSet.exists())&&(fileSet.open(QIODevice::ReadOnly)))
        {
                QString str = fileSet.readLine(0);
                if (str[0] == '1')
                {
                    ui->ch_autosave->setChecked(true);
                }
        }
}

void Card::on_timechoice_activated(int index)
{
    if (index == 0 && ui->ch_autosave->isChecked())
        AScooldown = 300000;
    else
    if (index == 1 && ui->ch_autosave->isChecked())
        AScooldown = 600000;
    else
    if (index == 2 && ui->ch_autosave->isChecked())
        AScooldown = 900000;
    else return;
}

void Card::on_ch_autosave_stateChanged()
{
    if (ui->ch_autosave->isChecked())
        ui->timechoice->setVisible(true);
    else ui->timechoice->setVisible(false);
}
