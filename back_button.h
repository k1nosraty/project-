#ifndef BACK_BUTTON_H
#define BACK_BUTTON_H

#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsScene>

class back_button:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    QGraphicsScene * scene;
public:
    back_button(QGraphicsScene * _scene);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

};

#endif // BACK_BUTTON_H
