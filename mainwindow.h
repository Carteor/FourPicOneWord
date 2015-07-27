#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>
#include <QtDebug>

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    QLabel *label;
    QPixmap *pixmap;
    QPushButton *quitButton;
    QVBoxLayout *layout;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *helpButton;
    QPushButton *newGameButton;

signals:

public slots:
};

#endif // MAINWINDOW_H
