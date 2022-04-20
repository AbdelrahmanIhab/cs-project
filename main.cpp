#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creating a scene
    QGraphicsScene * scene = new QGraphicsScene();

    //create an item to put into the scene

    MyRect * player = new MyRect();
    player->setRect(0,0,100,100);
    // add item to the scene
    scene->addItem(player);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();

    //fixing window size
    view->setFixedSize(800,800);
    scene->setSceneRect(0,0,800,800);

    //player spawn position (at the middle of the scene atm **SHOULD BE CHANGED DEPENDING ON LEVEL**)
    player->setPos(view->width()/2-player->rect().width()/2,(view->height()/2-player->rect().height()/2));

    return a.exec();
}
