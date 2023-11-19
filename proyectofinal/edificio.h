#ifndef EDIFICIO_H
#define EDIFICIO_H

#include "control_sprite.h"
#include <cstdlib>
#include <ctime>

namespace edificiovalores{
    const int width=147;
    const int height=530;
    const int speed=15;
    const int limitx=-150;
    const int yUpMaxRange=57;
    const int yDownMaxRange=45;
    const int yUpMinRange=3;
    const int yDownMinRange=7;
    const int xStart=1300;
    const int frequency=50;

}


class Edificio : public control_sprite
{
    Q_OBJECT
public:
    Edificio();
    ~Edificio();
    void start_mov();
    void stop_mov();


    bool getMov_on() const;
    void setMov_on(bool newMov_on);

private:
    int x;
    int y;
    bool mov_on;
    QTimer *timer;



    void randomY();

private slots:
    void movement();
};

#endif // EDIFICIO_H
