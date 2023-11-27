#include "edificio.h"
#include <QGraphicsScene>


Edificio::Edificio()
{
    timer=new QTimer;

    QPixmap imagen("://sprites/edificio.png");
    *full=imagen.copy();

    mov_on=true;
    Set_Width_Sprite(edificiovalores::width);
    Set_Height_Sprite(edificiovalores::height);

    srand(time(NULL));
    int random=rand() % 3;

    Select_sprite(random, 0);
    Scale_sprite(1);
    Show_Sprite(true);

    x=edificiovalores::xStart;
    randomY();
    setPos(x, y);

    connect(timer, SIGNAL(timeout()), this, SLOT(movement()));
     //timer->start(edificiovalores::frequency);
}

Edificio::~Edificio()
{
    delete timer;
}

void Edificio::start_mov()
{
    x-=edificiovalores::speed;

    if(x<=edificiovalores::limitx){
        x=edificiovalores::xStart;
        randomY();
    }
    setPos(x, y);

}

void Edificio::stop_mov()
{
    timer->stop();
}

void Edificio::start_timer()
{
    timer->start(edificiovalores::frequency);
}

bool Edificio::getMov_on() const
{
    return mov_on;
}

void Edificio::setMov_on(bool newMov_on)
{
    mov_on = newMov_on;
}

int Edificio::getX() const
{
    return x;
}

void Edificio::randomY()
{
    y=rand() % (edificiovalores::yDownMaxRange*10 + 1);
    y=600-y-edificiovalores::yDownMinRange*10;
}

void Edificio::movement()
{
    if(getMov_on()){
        start_mov();
    }
    else{
        stop_mov();
    }
}

