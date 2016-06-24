#ifndef BLACK_BOMB_H
#define BLACK_BOMB_H
#include"ball.h"
#define bbomb_mass 100
#define bbomb_price 100
#include<QGraphicsPixmapItem>
#include<QGraphicsScene>
#include<QObject>
class black_bomb : public ball{
    Q_OBJECT
public:
    black_bomb();
};

#endif // BLACK_BOMB_H
