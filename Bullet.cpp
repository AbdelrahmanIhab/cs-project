#include "Bullet.h"
#include <QTimer>
    Bullet::Bullet(char dir){
        setRect(0,0,5,5);
        direction=dir;
        QTimer * timer = new QTimer();

        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        timer->start(50);
    }

    void Bullet::move()
    {
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
        }
        else if(direction=='r')
        {
            setPos(x()+10,y());
        }
    }
