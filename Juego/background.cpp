#include "background.h"


background::background()
{
    timer= new QTimer;
    setMoving(true);
    x=0;
    y=0;

    //Set Full Pixmap
    QPixmap img(":/sprites/fondo.png");
    *full = img.copy();

    Set_Width_Sprite(backgroundvalues::background_width);
    Set_Height_Sprite(backgroundvalues::background_height);
    Select_sprite(0,0);
    Scale_sprite(backgroundvalues::scalebackgroundX, backgroundvalues::ScalebackgroundY);
    Show_Sprite(true);
    setPos(0,0);

    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));

    timer->start(backgroundvalues::speed);
}

background::~background()
{
    delete timer;
}

bool background::getMoving() const
{
    return moving;
}

void background::setMoving(bool newMoving)
{
    moving = newMoving;
}

void background::start_moving()
{
    x+=backgroundvalues::background_speed;

    if (x > (backgroundvalues::backgroundresetX)){
        x = 0;
    }
    setPos(-x, y);

}

void background::stop_moving()
{
    timer->stop();
}

void background::Move()
{
    if (getMoving()){
        start_moving();
    }
    else{
        stop_moving();
    }
}
