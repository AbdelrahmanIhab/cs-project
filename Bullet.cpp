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
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))== typeid(Enemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
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
