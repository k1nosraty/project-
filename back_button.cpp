#include"back_button.h"
#include<QGraphicsScene>v
#include"mainmenu.h"


back_button::back_button(QGraphicsScene * _scene)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/back.png"));
    scene =_scene;
}

void back_button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    scene->clear();
    mainmenu(scene);
}
