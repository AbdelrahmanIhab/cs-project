#include "MyRect.h"
#include "Bullet.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "Enemy.h"
void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        if(pos().x()>0){
            setPos(x()-20,y());
            direction = 'l';}
        }
        else if(event->key() == Qt::Key_Right){
            if(pos().x()+100 <1200){
            setPos(x()+20,y());
            direction = 'r';}
        }
        else if(event->key() == Qt::Key_Up){
            if(pos().y()>0){
            setPos(x(),y()-20);
            direction = 'u';}
        }
        else if(event->key() == Qt::Key_Down ){
            if(pos().y()+100 <1000){
            setPos(x(),y()+20);
            direction = 'd';}
        }
        else if(event->key() ==Qt::Key_Space ){
            Bullet * bullet = new Bullet(direction);
            bullet->setPos(x()+50,y()+50);
            scene()->addItem(bullet);
    }
}

void MyRect::spawn()
{
    Enemy *Enemy= new Enemy();
    scene()->addItem(Enemy);
}
