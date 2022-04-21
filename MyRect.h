#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QObject>
#include "Enemy.h"

#include "Bullet.h"
class MyRect: public QGraphicsRectItem{
    Q_OBJECT //macro
private:
    char direction;
public:
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();

};


#endif // MYRECT_H
