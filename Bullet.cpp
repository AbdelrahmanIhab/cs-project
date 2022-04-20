#include "Bullet.h"
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include <Enemy.h>
    Bullet::Bullet(char dir){
        //draw
        setPixmap(QPixmap (":/images/Bullet.png"));
        direction=dir;
        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));


        timer->start(50);
    }

    void Bullet::move(){
        // if bullet collides with enemy, destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems(); // a function that returns a list of pointers to all the QGraphicItems that the bullet collides with

    for(int i=0,n=colliding_items.size();i<n;++i){ //this loop traverses through the list and checks if a collision occurs
        if(typeid(*(colliding_items[i]))== typeid(Enemy)){
            //if the condition is true, remove the bullet and the enemy
            scene()->removeItem(colliding_items[i]); //for removing the enemy
            scene()->removeItem(this); //for removing the bullet
            delete colliding_items[i];
            delete this;
            return;
        }
    }

        if(direction=='u')
        {
            setPos(x(),y()-10);
        }
        else if(direction=='d')
        {
            setPos(x(),y()+10);
        }
        else if(direction=='l')
        {
            setPos(x()-10,y());
            setTransformOriginPoint(50,50);
            setRotation(90);
        }
        else
        {
            setPos(x()+10,y());
            setTransformOriginPoint(50,50);
            setRotation(90);
        }
    }
