#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>
#include <QPalette>
#include <QPixmap>
#include <time.h>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QFileDialog>
#include <QProgressDialog>
#include <QTextStream>
#include <QShortcut>
#include <QTimer>
#include <QTime>
#include <card.h>
#include <QtNetwork/QTcpSocket>
#include <QMediaPlayer>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; class Card;}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Setup();

private slots:
    void on_to_save_triggered();
    void on_choice_triggered();
    void on_lock_triggered();
    void on_how_to_triggered();
    void on_hotkeys_triggered();
    void on_open_settings_triggered();
    void on_d4x1_triggered();
    void on_d4x2_triggered();
    void on_d4x3_triggered();
    void on_d6x1_triggered();
    void on_d6x2_triggered();
    void on_d6x3_triggered();
    void on_d8x1_triggered();
    void on_d8x2_triggered();
    void on_d8x3_triggered();
    void on_d10x1_triggered();
    void on_d10x2_triggered();
    void on_d10x3_triggered();
    void on_d12x1_triggered();
    void on_d12x2_triggered();
    void on_d12x3_triggered();
    void on_d20x1_triggered();
    void on_d20x2_triggered();
    void on_d20x3_triggered();
    void on_d100x1_triggered();
    void on_d100x2_triggered();
    void on_d100x3_triggered();
    void slotShortcutCtrl4();
    void slotShortcutCtrl6();
    void slotShortcutCtrl8();
    void slotShortcutCtrl0();
    void slotShortcutCtrl1();
    void slotShortcutCtrl2();
    void slotShortcutCtrl3();
    void ASS();
    void SoP();
    void StP();
    void StttP();
    void SS_C();
    void SendToServ( unsigned int throwed );
    void on_set_IP_triggered();
    void on_attack_1_clicked();
    void on_attack_2_clicked();
    void on_attack_3_clicked();

signals:
    void sendData(QString path);

private:
    Ui::MainWindow  *ui;
    QPalette        palette;
    QTimer          *timer;
    QShortcut       *keyCtrl4;
    QShortcut       *keyCtrl6;
    QShortcut       *keyCtrl8;
    QShortcut       *keyCtrl0;
    QShortcut       *keyCtrl1;
    QShortcut       *keyCtrl2;
    QShortcut       *keyCtrl3;
    QTcpSocket      clsock;
    QMediaPlayer    *m_player;
};
#endif // MAINWINDOW_H
