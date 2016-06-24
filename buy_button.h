#ifndef BUY_BUTTON_H
#define BUY_BUTTON_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include"user.h"
class wbbb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    wbbb(user *user_);
public slots:
   // void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
class bbbb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    bbbb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
class dbb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    dbb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////


class obbb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    obbb(user *user_);
public slots:
   // void mousePressEvent(QGraphicsSceneMouseEvent *event);
};


class nbbb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    nbbb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // BUY_BUTTON_H
