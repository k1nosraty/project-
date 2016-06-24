#include"mainmenu.h"
#include"level.h"
#include"shop.h"
#include"newgame.h"
#include<QGraphicsScene>
#include<QGraphicsView>
#include"buy_button.h"
#include"back_button.h"
#include"choose_button.h"
new_game::new_game(QGraphicsScene * _scene)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/newgame.png"));//

    n_scene=_scene;
}

void new_game::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    user *_user=new user(n_scene);
    n_scene->clear();
    newgame *_newgame=new newgame(_user);
}

/////////////////////////////
gameoption::gameoption(QGraphicsScene *_scene)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/game_option.png"));//
    o_scene=_scene;
}

void gameoption::create_option_scene()
{


}

void gameoption::mousePressEvent(QGraphicsSceneMouseEvent *event)
{


    qDebug("mmm");

    user *_user=new user("myfile.txt");

    bbbb *obj1=new bbbb(_user);
    dbb *obj2=new dbb(_user);
    nbbb *obj3=new nbbb(_user);

    back_button *bbutton=new back_button(o_scene);

    nbcb *_nbcb=new nbcb(_user);
    obcb *_obcb=new obcb(_user);
     dcb *_dcb=new dcb(_user);
    wbcb *_wbcb=new wbcb(_user);
   bbcb *_bbcb=new bbcb(_user);





    //o_scene->setSceneRect(0,0,3000,2000);
     o_scene->clear();
    o_scene->addItem(bbutton);
    o_scene->addItem(obj1);
    o_scene->addItem(obj2);
    o_scene->addItem(obj3);

    obj1->setPos(1000,500);
    obj2->setPos(2000,500);
    obj3->setPos(1500,1000);
     bbutton->setPos(2500,300);





     o_scene->addItem(_obcb);
     _obcb->setPos(800,200);


     o_scene->addItem(_nbcb);
     _nbcb->setPos(1000,200);


     o_scene->addItem(_wbcb);
     _wbcb->setPos(1200,200);


     o_scene->addItem(_bbcb);
     _bbcb->setPos(1400,200);


     o_scene->addItem(_dcb);
     _dcb->setPos(2600,500);

    //create_option_scene();

}

//////////////////////////////
exitt::exitt()
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/exit.png"));//
}

void exitt::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

mainmenu::mainmenu()
{
    QGraphicsScene *scene= new QGraphicsScene();

    new_game * _play=new new_game(scene);
    continue_game * _continue=new continue_game(scene);
    gameoption * _option=new gameoption(scene);
    exitt * _exit=new exitt();

    scene->setSceneRect(0,0,3000,2000);

    scene->addItem(_play);
    _play->setPos(1200,400);

    scene->addItem(_continue);
    _continue->setPos(1200,600);

    scene->addItem(_option);
    _option->setPos(1200,800);

    scene->addItem(_exit);
    _exit->setPos(1200,1000);

    QGraphicsView *view= new QGraphicsView(scene);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(3000,2000);
    view->show();
}


mainmenu::mainmenu(QGraphicsScene *scene)
{

    new_game * _play=new new_game(scene);
    continue_game * _continue=new continue_game(scene);
    gameoption * _option=new gameoption(scene);
    exitt * _exit=new exitt();
    //exit * _exit=new exit();

    //scene->setSceneRect(0,0,3000,2000);
     scene->clear();
    scene->addItem(_play);
    _play->setPos(1200,400);

    scene->addItem(_continue);
    _continue->setPos(1200,600);

    scene->addItem(_option);
    _option->setPos(1200,800);
    scene->addItem(_exit);
    _exit->setPos(1200,1000);


}



continue_game::continue_game(QGraphicsScene * _scene)
{
    setPixmap(QPixmap("/home/k1nosraty/gaming/continue.png"));//
    c_scene=_scene;
}

void continue_game::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    user *_user=new user("myfile.txt",c_scene);
    c_scene->clear();
    qDebug("scene vvvclear");
    newgame *_newgame=new newgame(_user);
}
