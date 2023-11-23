#ifndef FIREBALL_H
#define FIREBALL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

class fireball: public QObject, public QGraphicsPixmapItem
{
public:
    fireball();
    void start_timers();
private:
    QPixmap ball1,ball2,ball3,ball4,ball5, ball6,img;
    QTimer *time_ball, *time_mov_fireball;
    int cont=0;
    double x0=880, y0=200, v0=70;
    double t = 0, g=9.8;

private slots:
    void set_imagen();
    void mov_fireball();
};

#endif // FIREBALL_H
