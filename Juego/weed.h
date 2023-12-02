#ifndef WEED_H
#define WEED_H

#include "control_sprite.h"
#include <cstdlib>
#include <ctime>
#include "edificio.h"

namespace weedvalues{
    const int width=335;
    const int height=335;
    const int limitx=-150;
    const int yDownMaxRange=45;
    const int yDownMinRange=7;
    const int xStart=1050;
    const int frequency=50;
    const double scale=0.26;
}

class weed : public control_sprite
{
    Q_OBJECT
public:
    weed();
    ~weed();
    void start_mov();
    void stop_mov();
    bool getMov() const;
    void setMov(bool newMov);
    void collision();
    int speed=0;
    int points;

    void setSpeed(int newSpeed);

private:
    int x;
    int y;
    bool mov;
    QTimer *timer;
    Edificio *building;
    void randomY();

private slots:
    void movement();
};

#endif // WEED_H
