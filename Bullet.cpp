#include "Bullet.h"
#include <QTimer>
    Bullet::Bullet(){
        setRect(0,0,5,50);

        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        timer->start(50);
    }

    void Bullet::move()
    {
        setPos(x(),y()-10);
    }
