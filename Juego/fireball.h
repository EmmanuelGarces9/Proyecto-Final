#ifndef FIREBALL_H
#define FIREBALL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>

class fireball: public QObject, public QGraphicsPixmapItem
{
public:
    fireball();
    void set_imagen();
private:
    QPixmap ball1,ball2,ball3,ball4,ball5, ball6,img;
    int cont=0;
    double y0 = 0, v0 = 100;
};

#endif // FIREBALL_H
