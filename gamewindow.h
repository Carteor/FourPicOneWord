#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QTextEdit>
#include <QPushButton>
#include <QSize>

class GameWindow : public QWidget
{
    Q_OBJECT
private:
    QVBoxLayout *picLayout;
    QLabel *prompt;
    QLabel *label;
    QPixmap *pixmap;
    QSize *picSize;

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    GameWindow(QString text, QString picPath);
    QPushButton *checkButton;
    QTextEdit *field;

signals:

public slots:
};

#endif // GAMEWINDOW_H
