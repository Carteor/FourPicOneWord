#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    qDebug() << "MainWindow()";
    newGameButton = new QPushButton("New Game");
    newGameButton->setGeometry(QRect(QPoint(185, 130), QSize(160, 50)));

    setFixedSize(500, 500);

    label = new QLabel;
    pixmap = new QPixmap("4pics.png");
    label->setPixmap(*pixmap);

    helpButton = new QPushButton("Help");
    helpButton->setGeometry(QRect(QPoint(185, 180), QSize(160, 50)));;
    quitButton = new QPushButton("Quit");
    quitButton->setGeometry(QRect(QPoint(185, 180), QSize(160, 50)));;

    layout = new QVBoxLayout();
    layout->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    layout->addWidget(newGameButton);
    layout->addWidget(helpButton);
    layout->addWidget(quitButton);

    setLayout(layout);

    connect(quitButton, SIGNAL(clicked()),
            this, SLOT(close()));

}

MainWindow::~MainWindow()
{

}

