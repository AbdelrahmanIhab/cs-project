#include "Enemy.h"
#include <QTimer>
#include<QGraphicsScene>
#include<QList>
#include <stdlib.h> //for the rand function
    Enemy::Enemy():QObject(),QGraphicsPixmapItem(){ //need to work on a position parameter for each enemy

        setPixmap(QPixmap(":/images/bubble-bass.png"));
        int randno= rand()%1000;
        //setPos(randno); need to make the set position based on each enemy, won't need the random function

        QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));


        timer->start(50);
    }
//ezay hay move?????
    //nst3mel rand
    void Enemy::move()
    {/*
        if(direction=='u')
        {
            setPos(x(),y()-5);

        }
        else if(direction=='d')
        {
            setPos(x(),y()+5);
        }
        else if(direction=='l')
        {
            setPos(x()-5,y());
            //roatate and shrink
            //QTransform transform;
            //QTransform trans = transform.rotate(90);
            //QPixmap *transPixmap = new QPixmap(pixmap->transformed(trans));

        }
        else
        {
            setPos(x()+5,y());
            //QPixmap p1(":/images/Bullet.png");
            //rotate and shrink
            //QTransform transform;
            //QTransform trans = transform.rotate(90);
            //QPixmap *transPixmap = new QPixmap(pixmap->transformed(trans));

        }*/
    }
