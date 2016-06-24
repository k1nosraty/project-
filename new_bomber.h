#ifndef NEW_BOMBER_H
#define NEW_BOMBER_H

#include"bomber.h"
#include"ball.h"
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsScene>
#include<QKeyEvent>
class new_bomber:public bomber{
    Q_OBJECT

public:

    new_bomber(QGraphicsScene *_scene,ball * ball_);
    //void keyPressEvent(QKeyEvent * event);
    void change_position();
};
#endif // NEW_BOMBER_H
