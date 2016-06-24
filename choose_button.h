#ifndef CHOOSE_BUTTON_H
#define CHOOSE_BUTTON_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include"user.h"
class wbcb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    wbcb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
class bbcb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    bbcb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
class dcb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    dcb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};


class obcb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    obcb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};


class nbcb:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    user * _user;
public:
    nbcb(user *user_);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};





#endif // CHOOSE_BUTTON_H

