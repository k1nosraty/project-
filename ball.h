#ifndef BALL_H
#define BALL_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsScene>
class ball:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
    int mass;
    double b_angle;
    double velocity;
    int price;
    double vx,vy;

public:
    //virtual void virfunc()=0;
    double show_velo();
    int show_mass();
    int timing;
    ball();
    void setrange(double angle=3.14/4,double speed=0.02);
public slots:
    void move_ball();
};

#endif // BALL_H
