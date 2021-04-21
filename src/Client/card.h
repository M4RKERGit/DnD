#ifndef CARD_H
#define CARD_H

#include <QMainWindow>
#include <QtGui>
#include "mainwindow.h"


namespace Ui {
class Card;
}

class Card : public QMainWindow
{
    Q_OBJECT

public:
    explicit Card(QWidget *parent = nullptr);
    ~Card();

public slots:
    void receiveData(QString path);
    void upload();


signals:

private slots:

    void on_saveButton_clicked();

    void on_timechoice_activated(int index);

    void on_ch_autosave_stateChanged();

private:
    Ui::Card *ui;
};
#endif // CARD_H
