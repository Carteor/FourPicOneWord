#include "widget.h"
#include <QTime>
#include <QDebug>
#include <QFile>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    cout << "Widget was created" << endl;

    id = new int;
    checkText = new QString;

    fillWords();
//  showAllWindows();

}

Widget::~Widget()
{

}

Widget::Widget(QString str){
    label = new QLabel;
    layout = new QVBoxLayout;
    label->setText(str);
    layout->addWidget(label);
    setLayout(layout);
}

int Widget::getRand(){
    cout << "getRand()" << endl;
    qsrand(QTime::currentTime().msec());
    int rand = qrand()%20;
    return rand;
}

void Widget::showRand(){
    cout << "showRand()" << endl;
    int randNum = this->getRand();
    *id = randNum;
    cout << "id: " << *id << endl;
    QString picPath;
    picPath.append(QString::number(*id+1));
    picPath.append(".png");
    cout << "picPath: " << picPath.toStdString() << endl;
    w = new GameWindow(prompts.at(*id), picPath);
    w->show();
    QObject::connect(w->checkButton, SIGNAL(clicked()),
            this, SLOT(check()));
}

void Widget::fillWords() {
    cout << "fillWords()" << endl;
    QFile file("answers.txt");
    file.open(QFile::ReadOnly |
              QFile::Text);
    while(!file.atEnd()){
        words.push_back(file.readLine());
    }
    file.close();

    QFile file2("prompts.txt");
    file2.open(QFile::ReadOnly |
              QFile::Text);
    while(!file2.atEnd()){
        prompts.push_back(file2.readLine());
    }
    file2.close();
}

void Widget::showAllWindows(){

}

void Widget::check(){
    *checkText = w->field->toPlainText();
    cout << "checkText: "
         << checkText->toStdString() << endl;
    cout << "compare with: " << words.at(*id).toStdString() << endl;

    int x = QString::compare(*checkText, words.at(*id), Qt::CaseInsensitive);
    cout << "x: " << x << endl;

    if(x == 0 || x == -1){
        cout << "Good" << endl;
        w->close();
        delete w;
        showRand();
    }
    else {
        cout << "Wrong" << endl;
        w->field->clear();
    }
}
