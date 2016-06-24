#include"statue.h"
#include<QTimer>
#define lifefactor 10
statue::statue(int level_n){
    setPixmap(QPixmap("/home/k1nosraty/gaming/king.png"));//
    life=1*lifefactor;
    QTimer *statuetimer = new QTimer();
    connect(statuetimer,SIGNAL(timeout()),this,SLOT(collision()));
    statuetimer->start(30);
}

int statue::show_life()
{
    return life;
}

void statue::setball(ball *ball_)
{
    _ball=ball_;
}

void statue::collision()
{
    double k=(_ball->show_velo())*(_ball->show_mass());
    QList<QGraphicsItem *>coll=collidingItems();
    if(coll.size()>0){
        life-=k;
    }

}

