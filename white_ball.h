#ifndef WHITE_BALL_H
#define WHITE_BALL_H
#include"ball.h"
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsScene>
#define wball_mass 100
#define wball_price 100
class white_ball : public ball{
Q_OBJECT
public:
    white_ball();
};

#endif // WHITE_BALL_H
