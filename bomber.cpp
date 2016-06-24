#include<bomber.h>
#include<QTimer>
#include<QDebug>
#include <QGraphicsTextItem>
bomber::bomber()
{

}

bomber::bomber(QGraphicsScene *_scene,ball * ball_){
    b_scene =  _scene;
    _ball=ball_;
    setPixmap(QPixmap("/home/k1nosraty/gaming/cannon2.png"));//
    bm_angle=-2;
    max_speed=100;
    up_down =0;
    left_right=0;
    speed=12;
    already_click = 0;
    QTimer *angletimer = new QTimer();
    connect(angletimer,SIGNAL(timeout()),this,SLOT(change_angle()));
    angletimer->start(30);
    QTimer *speedtimer = new QTimer();
    connect(speedtimer,SIGNAL(timeout()),this,SLOT(change_speed()));
    speedtimer->start(30);
    //_ball->setrange(bm_angle,speed);


    a=new QGraphicsTextItem();
    b=new QGraphicsTextItem();



}
void bomber::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug("first");
    already_click++;
    if(already_click==1){
        stopped=bm_angle;
        already_click++;
        qDebug("1done");
    }
    if(already_click==3){
        qDebug("2done");
        //_ball =  new ball();
        //_ball=
        _ball->setrange(stopped,speed);
        b_scene->addItem(_ball);
        _ball->setPos(200,1800);
        already_click=0;
    }

    qDebug("presss");
}


void bomber::change_angle()
{
    b_scene->removeItem(a);
    if(up_down==0){
        bm_angle-=0.02;

        if(bm_angle<=-1.54){
            up_down=1;
            qDebug("bm_angle");
        }
    }
    else {
        bm_angle+=0.02;
        if(bm_angle>=-0.02){
            up_down=0;
            qDebug("nnnnnn");
        }
    }
    b->setPlainText(QString::number(-bm_angle));
    b->setDefaultTextColor(Qt::black);
    b->setFont(QFont("times",16));
    b->setZValue(100);
    b_scene->addItem(b);
    b->setPos(400,200);
}

void bomber::change_speed()
{

     b_scene->removeItem(a);

    if(left_right==0){
        speed++;
        if(speed==80){
            left_right=1;
        }
    }
    else{
        speed--;
        if(speed==10){
            left_right=0;
        }
    }

    a->setPlainText(QString::number(speed));
    a->setDefaultTextColor(Qt::black);
    a->setFont(QFont("times",16));
    a->setZValue(100);

        b_scene->addItem(a);
        a->setPos(200,200);








        QGraphicsTextItem *c=new QGraphicsTextItem();
        c->setPlainText("speed");
        c->setDefaultTextColor(Qt::black);
        c->setFont(QFont("times",16));
        c->setZValue(100);
        b_scene->addItem(c);
        c->setPos(200,280);
        QGraphicsTextItem *d=new QGraphicsTextItem();
        //QString s="number";
        d->setPlainText("angle");
        d->setDefaultTextColor(Qt::black);
        d->setFont(QFont("times",16));
        d->setZValue(100);
        b_scene->addItem(d);
        d->setPos(400,280);
}
