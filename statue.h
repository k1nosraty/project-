#ifndef STATUE_H
#define STATUE_H
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QObject>
#include<QList>
#include<ball.h>
class statue:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
    int life;
    int x_pos;
    int y_pos;
    int space;
    ball * _ball;
public:
    statue(int level_n);
    void fire(int energy);
    int show_life();
    void coordinate(int &,int &);
    //QList * collidingItems(Qt::ItemSelectionMode mode) const;
    void setball(ball * ball_);

public slots:
    void collision();
};
#endif // STATUE_H0
