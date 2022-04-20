#include "MyRect.h"
#include "Bullet.h"
#include <QKeyEvent>
#include <QGraphicsScene>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        setPos(x()-20,y());
        direction = 'l';
    }
    else if(event->key() == Qt::Key_Right){
        setPos(x()+20,y());
        direction = 'r';
    }
    else if(event->key() == Qt::Key_Up){
        setPos(x(),y()-20);
        direction = 'u';
    }
    else if(event->key() == Qt::Key_Down ){
        setPos(x(),y()+20);
        direction = 'd';
    }
    else if(event->key() ==Qt::Key_Space ){
        Bullet * bullet = new Bullet(direction);
        bullet->setPos(x()+50,y()+50);
        scene()->addItem(bullet);
    }
}
