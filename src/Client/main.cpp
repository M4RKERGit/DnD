#include "mainwindow.h"
#include "card.h"

#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumHeight(1036);
    w.setMaximumHeight(1036);
    w.setMinimumWidth(789);
    w.setMaximumWidth(789);
    w.show();
    return a.exec();
}
