#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QVBoxLayout>
#include <QPushButton>

class HelpWindow : public QWidget
{
    Q_OBJECT
private:
    QLabel *help;
    QPushButton *quitButton;
    QVBoxLayout *layout;
public:
    explicit HelpWindow(QWidget *parent = 0);
    ~HelpWindow();

signals:

public slots:
};

#endif // HELPWINDOW_H
