#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QObject>
class Enemy : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
    private:
    char direction;
    public:
        Enemy();
    public slots:
        void move();
};



#endif // ENEMY_H
