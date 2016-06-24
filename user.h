#ifndef USER_H
#define USER_H
#include"ball.h"
#include"white_ball.h"
#include"black_bomb.h"
#include"dynamite.h"
#include"bomber.h"
#include"new_bomber.h"
#include<fstream>
#include<QString>
#include<QGraphicsScene>
#include<QFile>
#define maxdificulty 100
class user{
    int score;
    bool load_bomber[2];
    bool load_ball[3];
    int dificulty;
    int chose[2];

public:
    QGraphicsScene *scene;
    ball *_ball;
    bomber *_bomber;
    user();
    user(QString filename);
    user(QGraphicsScene *_scene);
    user(QString filename,QGraphicsScene *_scene);
    void buy_bomber(int model_number,int price);
    void buy_ball(int model_number,int price);
    int show_score();
    void load_data();
    void save_data();
    void choose_ball(int model_number);
    void choose_bomber(int model_number);
    void set_dificulty(int difi);
    int show_dificulty();
};

#endif // USER_H
