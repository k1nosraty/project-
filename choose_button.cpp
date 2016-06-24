#include"choose_button.h"


wbcb::wbcb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/wball3.png"));
    _user=user_;
}


bbcb::bbcb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/bbomb.png"));
    _user=user_;
}

dcb::dcb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/dyn.png"));
    _user=user_;
}


void wbcb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    _user->choose_ball(0);
}


void bbcb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    _user->choose_ball(1);
}

void dcb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
     _user->choose_ball(2);
}
////////////////////////////////////////////////////////////////////////////////////
obcb::obcb(user *user_)
{
    setPixmap(QPixmap(""));
    _user=user_;
}

void obcb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
     _user->choose_bomber(0);
}

nbcb::nbcb(user *user_)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/cannon2.png"));
    _user=user_;
}

void nbcb::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
     _user->choose_bomber(1);
}
