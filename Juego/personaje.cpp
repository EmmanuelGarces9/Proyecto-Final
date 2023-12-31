#include "personaje.h"

personaje::personaje()
{
    time_prota = new QTimer;
    dead_timer = new QTimer;
    deady=false;

    dead_vy=maincharvalues::vy;
    move1.load(":/Imagenes/Dragon_protagonista/01.png");
    move2.load(":/Imagenes/Dragon_protagonista/02.png");
    move3.load(":/Imagenes/Dragon_protagonista/03.png");

    set_imagen(0);
    setIs_alive(true);
    setPos(220,200);
    connect(time_prota,SIGNAL(timeout()),this,SLOT(cambio_imagen()));
    connect(dead_timer,SIGNAL(timeout()),this,SLOT(dead_animation()));
}

personaje::~personaje()
{
    delete time_prota;
    delete dead_timer;

}

void personaje::cambio_imagen()
{
    if(cont==2){
        dir=false;
    }else if(cont==0) dir=true;
    cont+=(2*dir-1);
    set_imagen(cont);
}

void personaje::set_imagen(int a)
{
    if(a==0){
        img=move1;
    }else if(a==1){
        img=move2;
    }else if(a==2){
        img=move3;
    }
    setPixmap(img.scaled(120,120));
}

void personaje::start_timer()
{
    time_prota->start(100);
}

void personaje::start_dead(){
    dead_timer->start(100);
}

void personaje::setYinitial_dead1(int newYinitial)
{
    yinitial_dead1 = newYinitial;
}


bool personaje::getIs_alive() const
{
    return is_alive;
}

void personaje::setIs_alive(bool newIs_alive)
{
    is_alive = newIs_alive;
}

void personaje::stop()
{
    time_prota->stop();
}

void personaje::dead_animation()
{
    posy=y();
    posx=x();
    if(yinitial_dead1-posy<165 and deady==false){
        set_imagen(0);
        posy+=dead_vy;
        setPos(posx,posy);
    }
    else{
        deady=true;
        double y = V0 * t + (0.5 * g * (t * t));
        posy+=y;
        if (posy<800){
            setPos(posx, posy);
            t+=0.2;
        }
    }
}

