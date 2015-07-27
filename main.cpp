#include <QApplication>
#include <QtDebug>
#include "widget.h"
#include "mainwindow.h"
#include "helpwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << "Game is running...";
    MainWindow *mainWindow = new MainWindow;
    HelpWindow *helpWindow = new HelpWindow;
    Widget *gameWidget = new Widget;

    mainWindow->show();

    QObject::connect(mainWindow->helpButton, SIGNAL(clicked()),
                     helpWindow, SLOT(show()));
    QObject::connect(mainWindow->newGameButton, SIGNAL(clicked()),
                     gameWidget, SLOT(showRand()));

    return a.exec();
}
