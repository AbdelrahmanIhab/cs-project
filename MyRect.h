#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QObject>
class MyRect: public QGraphicsRectItem{
    Q_OBJECT
private:
    char direction;
public:
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();

};


#endif // MYRECT_H
