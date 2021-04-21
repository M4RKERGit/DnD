#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "card.h"

bool locked = false;

void MainWindow::on_attack_1_clicked()
{
    QString buff = (ui->damage1->text());

    QChar biiif = buff[0];
    int count = biiif.toLatin1()-48;
    int min = 1 * count;

    QChar biff = buff[2];
    int max = (biff.toLatin1()-48) * count;


    int ret = min + rand() %(max - min + 1);
    //ret += ui->atk_bonus1->text().toInt();
    QString to_ret = "Вы нанесли " + QString::number(ret) + " урона";
    QMessageBox::about(this, "Результат атаки", to_ret);
    SendToServ(ret);
}


void MainWindow::on_attack_2_clicked()
{
    QString buff = (ui->damage2->text());

    QChar biiif = buff[0];
    int count = biiif.toLatin1()-48;
    int min = 1 * count;

    QChar biff = buff[2];
    int max = (biff.toLatin1()-48) * count;


    int ret = min + rand() %(max - min + 1);
    //ret += ui->atk_bonus2->text().toInt();
    QString to_ret = "Вы нанесли " + QString::number(ret) + " урона";
    QMessageBox::about(this, "Результат атаки", to_ret);
    SendToServ(ret);
}

void MainWindow::on_attack_3_clicked()
{
    QString buff = (ui->damage3->text());

    QChar biiif = buff[0];
    int count = biiif.toLatin1()-48;
    int min = 1 * count;

    QChar biff = buff[2];
    int max = (biff.toLatin1()-48) * count;


    int ret = min + rand() %(max - min + 1);
    //ret += ui->atk_bonus3->text().toInt();
    QString to_ret = "Вы нанесли " + QString::number(ret) + " урона";
    QMessageBox::about(this, "Результат атаки", to_ret);
    SendToServ(ret);
}

void MainWindow::on_d4x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %4;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d4x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() % 7;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d4x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() % 10;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d6x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %6;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d6x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() %11;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d6x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() %16;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d8x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %8;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d8x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() %15;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d8x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() %22;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d10x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %10;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d10x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() %19;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d10x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() %28;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d12x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %12;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d12x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() %23;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d12x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() %34;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d20x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 1 + rand() %20;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d20x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 2 + rand() %39;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d20x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = 3 + rand() %58;
    to_ret += QString::number(res);
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res);
}

void MainWindow::on_d100x1_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = rand() %10;
    to_ret += QString::number(res);
    to_ret += "0";
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res * 10);
}

void MainWindow::on_d100x2_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = rand() %20;
    to_ret += QString::number(res);
    to_ret += "0";
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res * 10);
}

void MainWindow::on_d100x3_triggered()
{

    QString to_ret = "Результат вашего броска: ";
    unsigned int res = rand() %30;
    to_ret += QString::number(res);
    to_ret += "0";
    QMessageBox::about(this, "Результат броска", to_ret);
    SendToServ(res * 10);
}


void MainWindow::on_lock_triggered()
{
    if (locked == false)
    {
        ui->alig->setReadOnly(true);
        ui->race->setReadOnly(true);
        ui->cherty->setReadOnly(true);
        ui->ideals->setReadOnly(true);
        ui->origin->setReadOnly(true);
        ui->player->setReadOnly(true);
        ui->charexp->setReadOnly(true);
        ui->damage1->setReadOnly(true);
        ui->damage2->setReadOnly(true);
        ui->damage3->setReadOnly(true);
        ui->mod_int->setReadOnly(true);
        ui->mod_str->setReadOnly(true);
        ui->mod_wis->setReadOnly(true);
        ui->privyaz->setReadOnly(true);
        ui->weapon1->setReadOnly(true);
        ui->weapon2->setReadOnly(true);
        ui->weapon3->setReadOnly(true);
        ui->atkspell->setReadOnly(true);
        ui->charname->setReadOnly(true);
        ui->mod_agil->setReadOnly(true);
        ui->mod_char->setReadOnly(true);
        ui->stat_int->setReadOnly(true);
        ui->stat_str->setReadOnly(true);
        ui->stat_wis->setReadOnly(true);
        ui->weakness->setReadOnly(true);
        ui->languages->setReadOnly(true);
        ui->mod_const->setReadOnly(true);
        ui->stat_agil->setReadOnly(true);
        ui->stat_char->setReadOnly(true);
        ui->atk_bonus1->setReadOnly(true);
        ui->atk_bonus2->setReadOnly(true);
        ui->atk_bonus3->setReadOnly(true);
        ui->skillsabil->setReadOnly(true);
        ui->stat_const->setReadOnly(true);
        ui->charclasslvl->setReadOnly(true);
        ui->copper->setReadOnly(true);
        ui->silver->setReadOnly(true);
        ui->elect->setReadOnly(true);
        ui->golden->setReadOnly(true);
        ui->platinum->setReadOnly(true);
        ui->armorclass->setReadOnly(true);
        ui->initiative->setReadOnly(true);
        ui->speedwagon->setReadOnly(true);
        ui->dungmaster->setReadOnly(true);
        ui->inspire->setReadOnly(true);
        /*ui->ch_int->setCheckable(false);
        ui->ch_lie->setCheckable(false);
        ui->ch_pet->setCheckable(false);
        ui->ch_agil->setCheckable(false);
        ui->ch_surv->setCheckable(false);
        ui->ch_surv->setCheckable(false);
        ui->ch_wise->setCheckable(false);
        ui->ch_atlet->setCheckable(false);
        ui->ch_const->setCheckable(false);
        ui->ch_magic->setCheckable(false);
        ui->ch_scary->setCheckable(false);
        ui->ch_stren->setCheckable(false);
        ui->ch_analys->setCheckable(false);
        ui->ch_nature->setCheckable(false);
        ui->ch_handsagil->setCheckable(false);
        ui->ch_attention->setCheckable(false);
        ui->ch_religion->setCheckable(false);
        ui->ch_medicine->setCheckable(false);
        ui->ch_charisma->setCheckable(false);
        ui->ch_stealth->setCheckable(false);
        ui->ch_pronits->setCheckable(false);
        ui->ch_history->setCheckable(false);
        ui->ch_acrobat->setCheckable(false);
        ui->ch_vistup->setCheckable(false);
        ui->ch_ubezhd->setCheckable(false);*/
        locked = true;
        QMessageBox::about(this, "Внимание!", "Вы закрыли редактирование");
        return;
    }

    if (locked == true)
    {
        ui->alig->setReadOnly(false);
        ui->race->setReadOnly(false);
        ui->cherty->setReadOnly(false);
        ui->ideals->setReadOnly(false);
        ui->origin->setReadOnly(false);
        ui->player->setReadOnly(false);
        ui->charexp->setReadOnly(false);
        ui->damage1->setReadOnly(false);
        ui->damage2->setReadOnly(false);
        ui->damage3->setReadOnly(false);
        ui->mod_int->setReadOnly(false);
        ui->mod_str->setReadOnly(false);
        ui->mod_wis->setReadOnly(false);
        ui->privyaz->setReadOnly(false);
        ui->weapon1->setReadOnly(false);
        ui->weapon2->setReadOnly(false);
        ui->weapon3->setReadOnly(false);
        ui->atkspell->setReadOnly(false);
        ui->charname->setReadOnly(false);
        ui->mod_agil->setReadOnly(false);
        ui->mod_char->setReadOnly(false);
        ui->stat_int->setReadOnly(false);
        ui->stat_str->setReadOnly(false);
        ui->stat_wis->setReadOnly(false);
        ui->weakness->setReadOnly(false);
        ui->languages->setReadOnly(false);
        ui->mod_const->setReadOnly(false);
        ui->stat_agil->setReadOnly(false);
        ui->stat_char->setReadOnly(false);
        ui->atk_bonus1->setReadOnly(false);
        ui->atk_bonus2->setReadOnly(false);
        ui->atk_bonus3->setReadOnly(false);
        ui->skillsabil->setReadOnly(false);
        ui->stat_const->setReadOnly(false);
        ui->charclasslvl->setReadOnly(false);
        ui->copper->setReadOnly(false);
        ui->silver->setReadOnly(false);
        ui->elect->setReadOnly(false);
        ui->golden->setReadOnly(false);
        ui->platinum->setReadOnly(false);
        ui->armorclass->setReadOnly(false);
        ui->initiative->setReadOnly(false);
        ui->speedwagon->setReadOnly(false);
        ui->dungmaster->setReadOnly(false);
        ui->inspire->setReadOnly(false);
        /*ui->ch_int->setCheckable(true);
        ui->ch_lie->setCheckable(true);
        ui->ch_pet->setCheckable(true);
        ui->ch_agil->setCheckable(true);
        ui->ch_surv->setCheckable(true);
        ui->ch_surv->setCheckable(true);
        ui->ch_wise->setCheckable(true);
        ui->ch_atlet->setCheckable(true);
        ui->ch_const->setCheckable(true);
        ui->ch_magic->setCheckable(true);
        ui->ch_scary->setCheckable(true);
        ui->ch_stren->setCheckable(true);
        ui->ch_analys->setCheckable(true);
        ui->ch_nature->setCheckable(true);
        ui->ch_handsagil->setCheckable(true);
        ui->ch_attention->setCheckable(true);
        ui->ch_religion->setCheckable(true);
        ui->ch_medicine->setCheckable(true);
        ui->ch_charisma->setCheckable(true);
        ui->ch_stealth->setCheckable(true);
        ui->ch_pronits->setCheckable(true);
        ui->ch_history->setCheckable(true);
        ui->ch_acrobat->setCheckable(true);
        ui->ch_vistup->setCheckable(true);
        ui->ch_ubezhd->setCheckable(true);*/
        locked = false;
        QMessageBox::about(this, "Внимание!", "Вы открыли редактирование");
        return;
    }

}

void MainWindow::on_how_to_triggered()
{
    QMessageBox::about(this, "Willkommen!", "Приветствую вас в интерактивном листе персонажа для D&D 5th Edition!\n"
                                            "Для начала пользования перейдите в меню 'Выбор сохранения', затем укажите целевую папку\n"
                                            "Папка должна содержать 11 файлов сохранения, выбрать небходимо save.txt, пример корректного сохранения поставляется вместе с программой\n"
                                            "Приятного пользования!\n"
                                            "(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧)");
}

void MainWindow::on_hotkeys_triggered()
{
    QMessageBox::about(this, "СправОчка", "Справка по горячим клавишам\n"
                                         "Ctrl + n для единоразового броска кубика:\n"
                                         "4 - d4\n"
                                         "6 - d6\n"
                                         "8 - d8\n"
                                         "0 - d10\n"
                                         "1 - d12\n"
                                         "2 - d20\n"
                                         "3 - d100\n"
                                         "(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧)");
}
