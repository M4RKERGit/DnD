#include "mainwindow.h"
#include "ui_mainwindow.h"

QString fileName;
int graph_counter = 0;

void MainWindow::on_to_save_triggered()
{
    QFile file(fileName);
    if ((file.exists()) && file.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->charname->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->charclasslvl->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->origin->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->player->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->race->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->alig->text() + "\r\n";
        file.write(popa.toUtf8());
        popa = ui->charexp->text() + "\r\n";
        file.write(popa.toUtf8());
        file.close();
    }

    QString patt = fileName;
    patt.remove(patt.length() -8, 8);

    QString pathW = patt + "weapons.txt";

    QFile fileW(pathW);
    if ((fileW.exists()) && fileW.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->weapon1->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->atk_bonus1->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->damage1->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->weapon2->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->atk_bonus2->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->damage2->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->weapon3->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->atk_bonus3->text() + "\r\n";
        fileW.write(popa.toUtf8());
        popa = ui->damage3->text() + "\r\n";
        fileW.write(popa.toUtf8());
        fileW.close();
    }
    else qDebug()<< "Блять...";

    QString pathS = patt + "stats.txt";

    QFile fileS(pathS);
    if ((fileS.exists()) && fileS.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->stat_str->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_str->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->stat_agil->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_agil->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->stat_const->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_const->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->stat_int->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_int->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->stat_wis->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_wis->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->stat_char->text() + "\r\n";
        fileS.write(popa.toUtf8());
        popa = ui->mod_char->text();
        fileS.write(popa.toUtf8());
        fileS.close();
    }
    else qDebug()<< "Блять...";

    QString pathO = patt + "others.txt";

    QFile fileO(pathO);
    if ((fileO.exists()) && fileO.open(QIODevice::WriteOnly))
    {
        QString buff = ui->languages->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        fileO.write(dada);
        fileO.close();
    }

    QString pathsnar = patt + "snar.txt";

    QFile filesnar(pathsnar);
    if ((filesnar.exists()) && filesnar.open(QIODevice::WriteOnly))
    {
        QString buff = ui->snarlist->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        filesnar.write(dada);
        filesnar.close();
    }

    QString pathSK = patt + "skills.txt";

    QFile fileSK(pathSK);
    if ((fileSK.exists()) && fileSK.open(QIODevice::WriteOnly))
    {
        QString buff = ui->skillsabil->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        fileSK.write(dada);
        fileSK.close();
    }

    QString pathAS = patt + "atkspell.txt";

    QFile fileAS(pathAS);
    if ((fileAS.exists()) && fileAS.open(QIODevice::WriteOnly))
    {
        QString buff = ui->atkspell->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        fileAS.write(dada);
        fileAS.close();
    }

    QString pathcher = patt + "cherty.txt";

    QFile filecher(pathcher);
    if ((filecher.exists()) && filecher.open(QIODevice::WriteOnly))
    {
        QString buff = ui->cherty->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        filecher.write(dada);
        filecher.close();
    }

    QString pathID = patt + "ideals.txt";

    QFile fileID(pathID);
    if ((fileID.exists()) && fileID.open(QIODevice::WriteOnly))
    {
        QString buff = ui->ideals->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        fileID.write(dada);
        fileID.close();
    }

    QString pathPRV = patt + "privyaz.txt";

    QFile filePRV(pathPRV);
    if ((filePRV.exists()) && filePRV.open(QIODevice::WriteOnly))
    {
        QString buff = ui->privyaz->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        filePRV.write(dada);
        filePRV.close();
    }

    QString pathWeak = patt + "weakness.txt";

    QFile fileWeak(pathWeak);
    if ((fileWeak.exists()) && fileWeak.open(QIODevice::WriteOnly))
    {
        QString buff = ui->weakness->toPlainText();
        std::string str = buff.toStdString();
        const char* dada = str.c_str();
        fileWeak.write(dada);
        fileWeak.close();
    }

    QString pathADD = patt + "additive.txt";

    QFile fileADD(pathADD);
    if ((fileADD.exists()) && fileADD.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->armorclass->text() + "\r\n";
        fileADD.write(popa.toUtf8());
        popa = ui->initiative->text() + "\r\n";
        fileADD.write(popa.toUtf8());
        popa = ui->speedwagon->text() + "\r\n";
        fileADD.write(popa.toUtf8());
        popa = ui->inspire->text() + "\r\n";
        fileADD.write(popa.toUtf8());
        popa = ui->dungmaster->text();
        fileADD.write(popa.toUtf8());
    }

    QString pathMON = patt + "money.txt";

    QFile fileMON(pathMON);
    if ((fileMON.exists()) && fileMON.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->copper->text() + "\r\n";
        fileMON.write(popa.toUtf8());
        popa = ui->silver->text() + "\r\n";
        fileMON.write(popa.toUtf8());
        popa = ui->elect->text() + "\r\n";
        fileMON.write(popa.toUtf8());
        popa = ui->golden->text() + "\r\n";
        fileMON.write(popa.toUtf8());
        popa = ui->platinum->text();
        fileMON.write(popa.toUtf8());
    }

    QString pathcheck = patt + "checks.txt";

    QFile filecheck(pathcheck);
    if ((filecheck.exists()) && filecheck.open(QIODevice::WriteOnly))
    {
        if (ui->ch_stren->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_agil->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_const->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_int->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_wise->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_charisma->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");


        if (ui->ch_acrobat->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_analys->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_atlet->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_attention->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_surv->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_vistup->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_scary->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_history->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_handsagil->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_magic->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_medicine->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_lie->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_nature->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_pronits->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_religion->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_stealth->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_ubezhd->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        if (ui->ch_pet->isChecked())
            filecheck.write("1 + \r\n");
        else filecheck.write("0 + \r\n");
        filecheck.close();
    }

    QString pathMAS = patt + "master.txt";

    QFile fileMAS(pathMAS);
    if ((fileMAS.exists()) && fileMAS.open(QIODevice::WriteOnly))
    {
        QString popa;
        popa = ui->master_acr->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_atl->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_int->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_str->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_wis->text() + "\r\n";
        fileMAS.write(popa.toUtf8());

        popa = ui->master_agil->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_anal->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_char->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_surv->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_vist->text() + "\r\n";
        fileMAS.write(popa.toUtf8());

        popa = ui->master_const->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_hands->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_magic->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_zapug->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_nature->text() + "\r\n";
        fileMAS.write(popa.toUtf8());

        popa = ui->master_stealth->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_ubezhd->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_pronits->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_medicine->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_religion->text() + "\r\n";
        fileMAS.write(popa.toUtf8());
        popa = ui->master_attention->text();
        fileMAS.write(popa.toUtf8());
    }
    ui->sysstatus->setText("Успешно сохранено!");
    QTimer::singleShot(2000, this, SLOT(SS_C()));
}

void MainWindow::on_choice_triggered()
{
    QString buff = QFileDialog::getOpenFileName(this, tr("Выбрать персонажа"),
                                                      "/home",
                                                      tr("Текстовые файлы (*.txt)"));
    if ( (buff[buff.length() - 8] != 'S') | (buff[buff.length() - 7] != 'A') | (buff[buff.length() - 6] != 'V') | (buff[buff.length() - 5] != 'E'))
    {
        QMessageBox::about(this, "Внимание", "Выбран некорректный файл:\nВыберите SAVE.txt для начала работы");
        return;
    }
    else
    fileName = buff;
    QString patt = fileName;
    patt.remove(patt.length() - 8, 8);

    int n = 50000;
            QProgressDialog* pprd = new QProgressDialog("Загружаю персонажа", "&Отмена", 0, n);
            pprd->setMinimumDuration(0);
            pprd->setWindowTitle("Пожалуйста, ждите...");
            for (int i = 0; i < n; ++i)
            {
                pprd->setValue(i) ;
                qApp->processEvents();
                if (pprd->wasCanceled())
                {
                     break;
                }
            }
            pprd->setValue(n) ;
            delete pprd;


    QFile file(fileName);
        if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
        {
                QString str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->charname->setText(str);
                QFont font = ui->charname->font();
                font.setPixelSize(20);
                ui->charname->setFont(font);
                str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->charclasslvl->setText(str);
                str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->origin->setText(str);
                str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->player->setText(str);
                str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->race->setText(str);
                str = file.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->alig->setText(str);
                str = file.readLine(0);
                ui->charexp->setText(str);
                file.close();
        }
        else
        {
            qDebug()<< "Ошибка открытия главного файла";
        }

     QString pathW = patt + "weapons.txt";
     QFile fileW(pathW);
        if ((fileW.exists())&&(fileW.open(QIODevice::ReadOnly)))
        {
                QString str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->weapon1->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->atk_bonus1->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->damage1->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->weapon2->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->atk_bonus2->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->damage2->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->weapon3->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->atk_bonus3->setText(str);
                str = fileW.readLine(0);
                str.remove(str.length() - 2, 2);
                ui->damage3->setText(str);
                file.close();
        }
            else
            {
                qDebug()<< "Ошибка открытия оружейного файла";
            }

        QString pathS = patt + "stats.txt";
        QFile fileS(pathS);
           if ((fileS.exists())&&(fileS.open(QIODevice::ReadOnly)))
           {
                   QString str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_str->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->mod_str->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_agil->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->mod_agil->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_const->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->mod_const->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_int->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->mod_int->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_wis->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->mod_wis->setText(str);
                   str = fileS.readLine(0);
                   str.remove(str.length() - 2, 2);
                   ui->stat_char->setText(str);
                   str = fileS.readLine(0);
                   ui->mod_char->setText(str);
                   file.close();
           }
               else
               {
                   qDebug()<< "Ошибка открытия файла характеристик";
               }


           QString pathO = patt + "others.txt";
           QFile fileO(pathO);
                if ((fileO.exists())&&(fileO.open(QIODevice::ReadOnly)))
                {
                    QByteArray arr;
                    arr = fileO.readAll();
                    ui->languages->setText(arr);
                    fileO.close();
                }
                else
                {
                    qDebug()<< "Ошибка открытия файла другого";
                }

                QString pathsnar = patt + "snar.txt";
                QFile filesnar(pathsnar);
                     if ((filesnar.exists())&&(filesnar.open(QIODevice::ReadOnly)))
                     {
                         QByteArray arr;
                         arr = filesnar.readAll();
                         ui->snarlist->setText(arr);
                         filesnar.close();
                     }
                     else
                     {
                         qDebug()<< "Ошибка открытия файла другого";
                     }


            QString pathSK = patt + "skills.txt";
            QFile fileSK(pathSK);
                if ((fileSK.exists())&&(fileSK.open(QIODevice::ReadOnly)))
                {
                    QByteArray arr;
                    arr = fileSK.readAll();
                    ui->skillsabil->setText(arr);
                    fileSK.close();
                }
                else
                {
                    qDebug()<< "Ошибка открытия файла умений";
                }

                QString pathAS = patt + "atkspell.txt";
                QFile fileAS(pathAS);
                     if ((fileAS.exists())&&(fileAS.open(QIODevice::ReadOnly)))
                     {
                         QByteArray arr;
                         arr = fileAS.readAll();
                         ui->atkspell->setText(arr);
                         fileAS.close();
                     }
                     else
                     {
                         qDebug()<< "Ошибка открытия файла другого";
                     }

                     QString pathcher = patt + "cherty.txt";
                     QFile filecher(pathcher);
                          if ((filecher.exists())&&(filecher.open(QIODevice::ReadOnly)))
                          {
                              QByteArray arr;
                              arr = filecher.readAll();
                              ui->cherty->setText(arr);
                              filecher.close();
                          }
                          else
                          {
                              qDebug()<< "Ошибка открытия файла другого";
                          }

                          QString pathID = patt + "ideals.txt";
                          QFile fileID(pathID);
                               if ((fileID.exists())&&(fileID.open(QIODevice::ReadOnly)))
                               {
                                   QByteArray arr;
                                   arr = fileID.readAll();
                                   ui->ideals->setText(arr);
                                   fileID.close();
                               }
                               else
                               {
                                   qDebug()<< "Ошибка открытия файла другого";
                               }

                               QString pathPRV = patt + "privyaz.txt";
                               QFile filePRV(pathPRV);
                                    if ((filePRV.exists())&&(filePRV.open(QIODevice::ReadOnly)))
                                    {
                                        QByteArray arr;
                                        arr = filePRV.readAll();
                                        ui->privyaz->setText(arr);
                                        filePRV.close();
                                    }
                                    else
                                    {
                                        qDebug()<< "Ошибка открытия файла другого";
                                    }

                                    QString pathWeak = patt + "weakness.txt";
                                    QFile fileWeak(pathWeak);
                                         if ((fileWeak.exists())&&(fileWeak.open(QIODevice::ReadOnly)))
                                         {
                                             QByteArray arr;
                                             arr = fileWeak.readAll();
                                             ui->weakness->setText(arr);
                                             fileWeak.close();
                                         }
                                         else
                                         {
                                             qDebug()<< "Ошибка открытия файла другого";
                                         }

                                         QString pathADD = patt + "additive.txt";
                                         QFile fileADD(pathADD);
                                            if ((fileADD.exists())&&(fileADD.open(QIODevice::ReadOnly)))
                                            {
                                                    QString str = fileADD.readLine(0);
                                                    str.remove(str.length() - 2, 2);
                                                    ui->armorclass->setText(str);
                                                    QFont font = ui->armorclass->font();
                                                              font.setPixelSize(30);
                                                              ui->armorclass->setFont(font);
                                                    str = fileADD.readLine(0);
                                                    str.remove(str.length() - 2, 2);
                                                    ui->initiative->setText(str);
                                                    ui->initiative->setFont(font);
                                                    str = fileADD.readLine(0);
                                                    str.remove(str.length() - 2, 2);
                                                    ui->speedwagon->setText(str);
                                                    ui->speedwagon->setFont(font);
                                                    str = fileADD.readLine(0);
                                                    str.remove(str.length() - 2, 2);
                                                    font.setPixelSize(24);
                                                    ui->inspire->setText(str);
                                                    ui->inspire->setFont(font);
                                                    str = fileADD.readLine(0);
                                                    ui->dungmaster->setText(str);
                                                    ui->dungmaster->setFont(font);
                                                    fileADD.close();
                                            }

                                            QString pathMON = patt + "money.txt";
                                            QFile fileMON(pathMON);
                                               if ((fileMON.exists())&&(fileMON.open(QIODevice::ReadOnly)))
                                               {
                                                       QString str = fileMON.readLine(0);
                                                       str.remove(str.length() - 2, 2);
                                                       ui->copper->setText(str);
                                                       str = fileMON.readLine(0);
                                                       str.remove(str.length() - 2, 2);
                                                       ui->silver->setText(str);
                                                       str = fileMON.readLine(0);
                                                       str.remove(str.length() - 2, 2);
                                                       ui->elect->setText(str);
                                                       str = fileMON.readLine(0);
                                                       str.remove(str.length() - 2, 2);
                                                       ui->golden->setText(str);
                                                       str = fileMON.readLine(0);
                                                       ui->platinum->setText(str);
                                                       fileMON.close();
                                               }

                                               QString pathcheck = patt + "checks.txt";
                                               QFile filecheck(pathcheck);
                                                  if ((filecheck.exists())&&(filecheck.open(QIODevice::ReadOnly)))
                                                  {
                                                          QString str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_stren->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_agil->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_const->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_int->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_wise->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_charisma->setChecked(true);


                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_acrobat->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_analys->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_atlet->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_attention->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_surv->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_vistup->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_scary->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_history->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_handsagil->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_magic->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_medicine->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_lie->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_nature->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_pronits->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_religion->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_stealth->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_ubezhd->setChecked(true);
                                                          str = filecheck.readLine(0);
                                                          if (str[0] == '1')
                                                              ui->ch_pet->setChecked(true);
                                                          file.close();
                                                  }

                                                  QString settpath = patt + "settings.txt";
                                                  QFile settfile(settpath);
                                                  if ((settfile.exists())&&(settfile.open(QIODevice::ReadOnly)))
                                                  {
                                                          QString str = settfile.readLine(0);
                                                          str = settfile.readLine(0);
                                                          timer = new QTimer();
                                                          connect(timer, SIGNAL(timeout()), this, SLOT(ASS()));
                                                          timer->start(str.toInt());
                                                          qDebug()<< "Получилось";
                                                  }

                                                  QString pathMAS = patt + "master.txt";
                                                  QFile fileMAS(pathMAS);
                                                     if ((fileMAS.exists())&&(fileMAS.open(QIODevice::ReadOnly)))
                                                     {
                                                             qDebug()<< "ЕЕЕЕЕ";
                                                             QString str = fileMAS.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_acr->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_atl->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_int->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_lie->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_pet->setText(str);

                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_str->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_wis->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_agil->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_anal->setText(str);

                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_char->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_hist->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_surv->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_vist->setText(str);

                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_const->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_hands->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_magic->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_zapug->setText(str);

                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_nature->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_ubezhd->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_pronits->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_medicine->setText(str);
                                                             str = fileMON.readLine(0);
                                                             str.remove(str.length() - 2, 2);
                                                             ui->master_religion->setText(str);
                                                             str = fileMON.readLine(0);
                                                             ui->master_attention->setText(str);

                                                             fileMON.close();
                                                             file.close();
                                                     }
    ui->sysstatus->setText("Успешно загружено!!!");
    QTimer::singleShot(2000, this, SLOT(SS_C()));
}

void MainWindow::ASS()
{
    SoP();
    on_to_save_triggered();
}

void MainWindow::SoP()
{
    if (graph_counter == 2)
    {
        ui->sysstatus->setText("Автосохранение успешно завершено!");
        QTimer::singleShot(2000, this, SLOT(SS_C()));
        graph_counter = 0;
        return;
    }
    else
    ui->sysstatus->setText("Автосохранение.");
        QTimer::singleShot(500, this, SLOT(StP()));
}

void MainWindow::StP()
{
    ui->sysstatus->setText("Автосохранение..");
        QTimer::singleShot(500, this, SLOT(StttP()));
}

void MainWindow::StttP()
{
    graph_counter ++;
    ui->sysstatus->setText("Автосохранение...");
        QTimer::singleShot(500, this, SLOT(SoP()));
}

void MainWindow::SS_C()
{
    ui->sysstatus->setText("");
}


void MainWindow::on_open_settings_triggered()
{
    Card *sss = new Card;
    sss->show();
        QString path = fileName;
        connect(this, SIGNAL(sendData(QString)), sss, SLOT(receiveData(QString)));
        emit sendData(path);
}
