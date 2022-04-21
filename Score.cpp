#include"Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent) :QGraphicsTextItem(parent)
  //QGraphicsTextItem is the base class of the score class
{

    //intializing the score to 0
   score = 0;

    // draw the text in the view
    setPlainText(Qstring("Score:") + QString::number(score)); //member function in the QGraphicsTextItem    ex: Score: 0
    //QString converts the integer to a string. The above line concatenates the score integer to the text "Score:"

    setDefaultTextColor(Qt::white);

    setFont(QFont("times",16)); //first parameter is the font name and second one is its size
}

void Score::increase()
{
    score++;
}

int Score::getScore()
{
    return score;
}
