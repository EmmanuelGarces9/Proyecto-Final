#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "control_sprite.h"


namespace backgroundvalues{
const int background_width= 2188;
const int background_height=108;
const int speed=20;
const double scalebackgroundX= 5;
const double ScalebackgroundY=5.9;
const int backgroundresetX= (scalebackgroundX) * (background_width - 270);
}

class background : public control_sprite
{
    Q_OBJECT
public:
    background();
    ~background();
    void start_moving();
    void stop_moving();
    bool getMoving() const;
    void setMoving(bool newMoving);
    void setBackground_speed(int newBackground_speed);

private:
    int x;
    int y;
    int background_speed=0;
    bool moving;
    QTimer *timer;
private slots:
    void Move();
};

#endif // BACKGROUND_H
