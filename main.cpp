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

    MyRect * rect = new MyRect();
    rect->setRect(0,0,100,100);
    // add item to the scene
    scene->addItem(rect);

    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();


    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    return a.exec();
}
