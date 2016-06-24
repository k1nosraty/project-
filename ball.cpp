#include"ball.h"
#include<math.h>
#include<QTimer>
double ball::show_velo()
{
    return velocity;
}

int ball::show_mass()
{
    return mass;
}

ball::ball(){
    setPixmap(QPixmap("/home/k1nosraty/gaming/ball.png"));//
    b_angle=0.02;
    velocity=0.02;
    QTimer *movetimer = new QTimer();
    connect(movetimer,SIGNAL(timeout()),this,SLOT(move_ball()));
    movetimer->start(50);
}

void ball::setrange(double angle,double speed)
{
    b_angle=angle;
    velocity=speed;

    vx=velocity*cos(b_angle);
    vy=velocity*sin(b_angle);
}

void ball::move_ball()
{
    setPos(x()+vx,y()+vy);
    vy+=1.6;
}
