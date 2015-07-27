#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include <QString>
#include <QFile>
#include <QtCore>
#include <QTime>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QApplication>
#include <QVector>
#include "gamewindow.h"

class Widget : public QWidget
{
    Q_OBJECT

private:
    QLabel *label;
    QVBoxLayout *layout;
    GameWindow *w;

    QVector <QString> words;
    QVector <QString> prompts;

    int *id;
    QString *checkText;

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    Widget(QString);

public slots:
    int getRand();
    void showRand();
    void fillWords();
    void showAllWindows();
    void check();
};
#endif // WIDGET_H
