#include "gamewindow.h"
#include <iostream>
using namespace std;

GameWindow::GameWindow(QWidget *parent) : QWidget(parent)
{

}

GameWindow::~GameWindow()
{

}

GameWindow::GameWindow(QString text, QString picPath){
    cout << "GameWindow()" << endl;

    picLayout = new QVBoxLayout;
    label = new QLabel;
    pixmap = new QPixmap(picPath);
    picSize = new QSize(700, 620);
    prompt = new QLabel;
    field = new QTextEdit;
    checkButton = new QPushButton("Check");
    setFixedSize(700, 600);

    *pixmap = pixmap->scaled(*picSize, Qt::KeepAspectRatio);
    label->setPixmap(*pixmap);
    prompt->setText(text);
    field->setFixedSize(300, 30);

    checkButton->setGeometry(QRect(QPoint(800, 130), QSize(50, 50)));

    picLayout->setAlignment(Qt::AlignCenter);
    picLayout->addWidget(label);
    picLayout->addWidget(prompt);
    picLayout->addWidget(field);
    picLayout->addWidget(checkButton);

    setLayout(picLayout);
}

