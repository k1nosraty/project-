#ifndef DYNAMITE_H
#define DYNAMITE_H
#include"ball.h"
#include<QObject>
#include<QGraphicsPixmapItem>
#define dynamite_mass 100
#define dynamite_price 100
class dynamite : public ball{
Q_OBJECT
public:
    dynamite();
};

#endif // DYNAMITE_H
