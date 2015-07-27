#include "helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600, 600);
    help = new QLabel("helpWindow");
    help->setText("<b> HOW TO SUCCEED IN THIS GAME: </b>  <br><br>"
                      "Below the pictures, you will see blank spaces indicating how many letters are in the answer.<br> "
                      "Below that, there will be a scrambled keyboard of possible letters you can select from when typing <br> "
                      "in your guess for the answer. Tap on these letters to spell out the word you believe to be the answer.<br> "
                      "The answer to the puzzle is the common theme between the four photographs. Note that you will <br> "
                      "be provided with more letters than necessary. This is not simply a scrambler-type game. <br> "
                      "When you answer the question correctly, "
                      "you will be rewarded with three coins and can progress to <br> "
                      "the next level.<br><br>"
                      "<b> GOOD LUCK! </b> <br><br><br> "
                      "Author: Serikov Sayat <br>"
                      "(inspired by work of previous author Kassymova Gulnaz)<br> "
                      "(created in summer of 2015)");

    quitButton = new QPushButton("Quit");

    layout = new QVBoxLayout;
    layout->addWidget(help);
    layout->addWidget(quitButton);
    setLayout(layout);

    connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
}

HelpWindow::~HelpWindow()
{

}

