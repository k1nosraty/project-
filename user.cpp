#include"user.h"
#include<iostream>
#include<fstream>
#include<QString>
#include"white_ball.h"
#include"black_bomb.h"
#include"dynamite.h"
#include"new_bomber.h"
#include"bomber.h"
#define firstmoney 100000
using namespace std;


user::user(QString filename)
{
    load_data();
}

user::user(QGraphicsScene *_scene){
    load_ball[0]=1;
    load_ball[1]=0;
    load_ball[2]=0;
    load_bomber[0]=1;
    load_bomber[1]=0;
    score=firstmoney;

    scene=_scene;
    choose_ball(0);
    choose_bomber(0);
    chose[0]=1;
    chose[1]=2;
    save_data();
}
user::user(QString filename,QGraphicsScene *_scene)
{
    scene=_scene;
    load_data();

    if(chose[0]==1){
        choose_ball(0);
    }
    else  if(chose[0]==2){
        choose_ball(1);
    }
    else if(chose[0]==3){
        choose_ball(2);
    }
    else
    {
        choose_ball(0);
    }
    //choose_ball(1);
    if(chose[1]==1)
    choose_bomber(0);

   else if(chose[1]==2)
     choose_bomber(1);
    else{
        choose_bomber(0);
    }

    save_data();
}

void user::buy_bomber(int model_number,int price)
{
    if(load_bomber[model_number]==0){
        if(score>=price){
           score-=price;
           load_bomber[model_number]=1;
         }
    }
    save_data();
}

void user::buy_ball(int model_number,int price)
{

    if(load_ball[model_number]==0){
    if(score>=price){
        score-=price;
        load_ball[model_number]=1;
        qDebug("buy done");
    }
    }
    save_data();
}

int user::show_score()
{
    return score;
}

void user::load_data()
{
    QFile fp("myfile.txt");
    fp.open (QIODevice::ReadOnly | QIODevice::Text);
    QDataStream in(&fp);

    //file.open("myfile.txt",ios::binary|ios::out);
    for(int i=0;i<2;i++){
        in>>load_bomber[i];
    }
    for(int i=0;i<3;i++){
        in>>load_ball[i];
    }
    in>>score;
    in>>chose[0];
    in>>chose[1];
    fp.close();
}

void user::save_data()
{
    QFile fp("myfile.txt");
    fp.open (QIODevice::WriteOnly | QIODevice::Text);
    QDataStream out(&fp);

    //file.open("myfile.txt",ios::binary|ios::out);
    for(int i=0;i<2;i++){
        out<<load_bomber[i];
    }
    for(int i=0;i<3;i++){
        out<<load_ball[i];
    }
    out<<score;
    out<<chose[0];
    out<<chose[1];
    fp.close();
}

void user::choose_ball(int model_number)
{
    if(model_number==0){
        _ball=new white_ball();
        chose[0]=1;
    }
    if(model_number==1){
        _ball=new black_bomb();
         chose[0]=2;
    }
    if(model_number==2){
        _ball=new dynamite();
         chose[0]=3;
    }
    save_data();

}

void user::choose_bomber(int model_number)
{
    if(model_number==0){
        _bomber=new bomber(scene,_ball);
       // scene->addItem(_bomber);
         chose[1]=1;
    }
    if(model_number==1){
        _bomber=new bomber(scene,_ball);
         chose[1]=2;
        // scene->addItem(_bomber);
    }
    save_data();
}

void user::set_dificulty(int difi)
{
    dificulty=difi;
}

int user::show_dificulty()
{
    return dificulty;
}
