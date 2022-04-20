#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QObject>
class Bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
    private:
    char direction;
    public:
        Bullet(char);
    public slots:
        void move();

};

#endif // BULLET_H
