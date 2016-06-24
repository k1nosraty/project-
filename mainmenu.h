#ifndef MAINMENU_H
#define MAINMENU_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsScene>
class mainmenu{
public:
    mainmenu();
    mainmenu(QGraphicsScene * scene);
};

class new_game :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
     QGraphicsScene * n_scene;
public:
    new_game(QGraphicsScene * _scene);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
////////////////////////////////////
class continue_game :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    QGraphicsScene * c_scene;
public:
    continue_game(QGraphicsScene * _scene);
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
///////////////////////////////////
class gameoption :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
    QGraphicsScene * o_scene;
public:
    gameoption(QGraphicsScene *_scene);
    void create_option_scene();
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};
//////////////////////////////////
class exitt :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    exitt();
public slots:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MAINMENU_H
