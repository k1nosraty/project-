#ifndef BOMBER_H
#define BOMBER_H
#include<QGraphicsPixmapItem>
#include<QGraphicsScene>
#include<QObject>
#include<ball.h>
class bomber:public QObject,public QGraphicsPixmapItem {
    Q_OBJECT
protected:
    int max_speed;
    int speed;
    double bm_angle;
    int price;
    bool up_down;
    bool left_right;
    ball *_ball;
    QGraphicsScene * b_scene;
    int already_click;
    double stopped;
    QGraphicsTextItem *a;
    QGraphicsTextItem *b;
public:
    bomber();
    bomber(QGraphicsScene *_scene,ball * ball_);
    void shoot();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

public slots:
    void change_angle();
    void change_speed();
};

#endif // BOMBER_H
