#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "uppermenu.cpp"
#include <QHostAddress>
#include <QInputDialog>

bool connected = 0;
QString host;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Setup();
    srand(time(NULL));

    keyCtrl4 = new QShortcut(this);
        keyCtrl4->setKey(Qt::CTRL + Qt::Key_4);
        connect(keyCtrl4, SIGNAL(activated()), this, SLOT(slotShortcutCtrl4()));

    keyCtrl6 = new QShortcut(this);
        keyCtrl6->setKey(Qt::CTRL + Qt::Key_6);
        connect(keyCtrl6, SIGNAL(activated()), this, SLOT(slotShortcutCtrl6()));

    keyCtrl8 = new QShortcut(this);
        keyCtrl8->setKey(Qt::CTRL + Qt::Key_8);
        connect(keyCtrl8, SIGNAL(activated()), this, SLOT(slotShortcutCtrl8()));

    keyCtrl0 = new QShortcut(this);
        keyCtrl0->setKey(Qt::CTRL + Qt::Key_0);
        connect(keyCtrl0, SIGNAL(activated()), this, SLOT(slotShortcutCtrl0()));

    keyCtrl1 = new QShortcut(this);
        keyCtrl1->setKey(Qt::CTRL + Qt::Key_1);
        connect(keyCtrl1, SIGNAL(activated()), this, SLOT(slotShortcutCtrl1()));

    keyCtrl2 = new QShortcut(this);
        keyCtrl2->setKey(Qt::CTRL + Qt::Key_2);
        connect(keyCtrl2, SIGNAL(activated()), this, SLOT(slotShortcutCtrl2()));

    keyCtrl3 = new QShortcut(this);
        keyCtrl3->setKey(Qt::CTRL + Qt::Key_3);
        connect(keyCtrl3, SIGNAL(activated()), this, SLOT(slotShortcutCtrl3()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Setup()
{
    ui->weapon1->setStyleSheet("QLineEdit{background:transparent}");
    ui->atk_bonus1->setStyleSheet("QLineEdit{background:transparent}");
    ui->damage1->setStyleSheet("QLineEdit{background:transparent}");
    ui->weapon2->setStyleSheet("QLineEdit{background:transparent}");
    ui->atk_bonus2->setStyleSheet("QLineEdit{background:transparent}");
    ui->damage2->setStyleSheet("QLineEdit{background:transparent}");
    ui->weapon3->setStyleSheet("QLineEdit{background:transparent}");
    ui->atk_bonus3->setStyleSheet("QLineEdit{background:transparent}");
    ui->damage3->setStyleSheet("QLineEdit{background:transparent}");

    ui->mod_str->setStyleSheet("QLineEdit{background:transparent}");
    ui->mod_agil->setStyleSheet("QLineEdit{background:transparent}");
    ui->mod_const->setStyleSheet("QLineEdit{background:transparent}");
    ui->mod_int->setStyleSheet("QLineEdit{background:transparent}");
    ui->mod_wis->setStyleSheet("QLineEdit{background:transparent}");
    ui->mod_char->setStyleSheet("QLineEdit{background:transparent}");

    ui->armorclass->setStyleSheet("QLineEdit{background:transparent}");
    ui->initiative->setStyleSheet("QLineEdit{background:transparent}");
    ui->speedwagon->setStyleSheet("QLineEdit{background:transparent}");
    ui->inspire->setStyleSheet("QLineEdit{background:transparent}");
    ui->dungmaster->setStyleSheet("QLineEdit{background:transparent}");

    ui->copper->setStyleSheet("QLineEdit{background:transparent}");
    ui->silver->setStyleSheet("QLineEdit{background:transparent}");
    ui->elect->setStyleSheet("QLineEdit{background:transparent}");
    ui->golden->setStyleSheet("QLineEdit{background:transparent}");
    ui->platinum->setStyleSheet("QLineEdit{background:transparent}");

    ui->pass_wis->setStyleSheet("QLineEdit{background:transparent}");
}

void MainWindow::SendToServ( unsigned int throwed )
{
    if (host == "")
    {
        host = QInputDialog::getText(0, "Введите адрес хоста в локальной сети", "Адрес: ", QLineEdit::Normal, "127.0.0.1");
    }
    QByteArray data;
    QString charname;
    charname = ui->charname->text() += " - ";
    charname += QString::number(throwed);

    data = charname.toLocal8Bit();

        QTcpSocket *clsock = new QTcpSocket(); // <-- needs to be a member variable: QTcpSocket * clsock;
        if (connected == 1)
        {
            {
                clsock->write( data );
            }
        }
        else
        clsock->connectToHost(host, 1338);
        if( clsock->waitForConnected() ) {
            clsock->write( data );
        }
}


void MainWindow::on_set_IP_triggered()
{
    host = QInputDialog::getText(0, "Введите адрес хоста в локальной сети", "Адрес: ", QLineEdit::Normal, "127.0.0.1");
}
