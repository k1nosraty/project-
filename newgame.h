#ifndef NEWGAME_H
#define NEWGAME_H
#include"user.h"
#include"statue.h"
#include<QTimer>
#include<QObject>
class newgame: public QObject{
    Q_OBJECT
    user *user_;
    statue *_statue;
public:
    newgame(user *_user);
public slots:
    void checkstatue();
};

#endif // NEWGAME_H
