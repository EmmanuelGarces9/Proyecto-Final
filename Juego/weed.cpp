#include "weed.h"

weed::weed()
{
    timer=new QTimer;
    QPixmap imagen("://sprites/weed.png");
    *full=imagen.copy();

    mov=true;
    Set_Width_Sprite(weedvalues::width);
    Set_Height_Sprite(weedvalues::height);

    Select_sprite(0, 0);
    Scale_sprite(weedvalues::scale);
    Show_Sprite(true);

    x=weedvalues::xStart;

    srand(time(NULL));
    randomY();
    setPos(x, y);

    connect(timer, SIGNAL(timeout()), this, SLOT(movement()));
    timer->start(weedvalues::frequency);
}

weed::~weed()
{
    delete timer;
}

void weed::start_mov()
{
    x-=speed;

    if(x<=weedvalues::limitx){
        x=weedvalues::xStart;
        randomY();
    }
    setPos(x, y);

}

void weed::stop_mov()
{
    timer->stop();
}

bool weed::getMov() const
{
    return mov;
}

void weed::setMov(bool newMov)
{
    mov = newMov;
}

void weed::collision()
{
    Show_Sprite(0);
    randomY();
    x=weedvalues::xStart+300;
    setPos(x,y);
    Show_Sprite(1);
}

void weed::setSpeed(int newSpeed)
{
    speed = newSpeed;
}

void weed::randomY()
{
    y=rand() % (weedvalues::yDownMaxRange*10 + 1);
    y=600-y-weedvalues::yDownMinRange*10;
}

void weed::movement()
{
    if(getMov()){
        start_mov();
    }
    else{
        stop_mov();
    }
}
