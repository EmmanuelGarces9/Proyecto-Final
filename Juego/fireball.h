
#ifndef FIREBALL_H
#define FIREBALL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

class fireball: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    fireball();
    void start_timers();
private:
    QPixmap ball1,ball2,ball3,ball4,ball5, ball6,img;
    QTimer *time_ball, *time_mov_fireball;
    int cont=0;
    double x0=1000, y0=200, v0=90,t = 0, g=9.8, theta = 30,
        V0x= v0 * cos(theta * (M_PI/180)),
        V0y= v0 * sin(theta * (M_PI/180));

private slots:
    void set_imagen();
    void mov_fireball();
};

#endif // FIREBALL_H

