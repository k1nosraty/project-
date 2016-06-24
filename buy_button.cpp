#include"buy_button.h"


wbbb::wbbb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/wball3.png"));
    _user=user_;
}


bbbb::bbbb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/bbomb.png"));
    _user=user_;
}

dbb::dbb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/dyn.png"));
    _user=user_;
}



void bbbb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    _user->buy_ball(1,1000);
}

void dbb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
     _user->buy_ball(2,5000);
}
////////////////////////////////////////////////////////////////////////////////////
obbb::obbb(user *user_)
{
    setPixmap(QPixmap(""));
    _user=user_;
}

nbbb::nbbb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/cannon2.png"));
    _user=user_;
}

void nbbb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
     _user->buy_bomber(1,10000);
}
