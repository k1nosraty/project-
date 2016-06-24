#include"newgame.h"
#include<QGraphicsScene>
#include<QGraphicsView>
#include<bomber.h>
#include<ball.h>
#include<statue.h>
#include<QDebug>
#include"back_button.h"
#include"choose_button.h"
newgame::newgame(user *_user)
{
    //QGraphicsScene *_scene=new QGraphicsScene();
    //bomber *_bomber=_user->_bomber;
    //_scene=_user->scene;
    _statue=new statue(_user->show_dificulty());
    back_button *bbut=new back_button(_user->scene);
        user_=_user;
     _user->scene->addItem(_user->_bomber);
     _user->_bomber->setPos(200,1400);

     _user->scene->addItem(_statue);
     _statue->setPos(2500,1500);

     _user->scene->addItem(bbut);
     bbut->setPos(2200,400);
     ////////////////////
     _statue->setball(_user->_ball);

     ////////////////////////////

     QTimer *lifetimer = new QTimer();
     connect(lifetimer,SIGNAL(timeout()),this,SLOT(checkstatue()));
     lifetimer->start(30);




    qDebug("deee");
   /*QGraphicsView *view= new QGraphicsView(_scene);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(3000,2000);
    view->show();*/

}

void newgame::checkstatue()
{
    if(_statue->show_life()<0){
        user_->scene->removeItem(_statue);
    }
}
