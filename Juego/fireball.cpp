#include "fireball.h"

fireball::fireball()
{
    ball1.load(":/Imagenes/Bola de fuego/00.png");
    ball2.load(":/Imagenes/Bola de fuego/01.png");
    ball3.load(":/Imagenes/Bola de fuego/02.png");
    ball4.load(":/Imagenes/Bola de fuego/03.png");
    ball5.load(":/Imagenes/Bola de fuego/04.png");
    ball6.load(":/Imagenes/Bola de fuego/05.png");

    setPos(880,200);

    time_ball = new QTimer;
    time_mov_fireball = new QTimer;

    connect(time_mov_fireball,SIGNAL(timeout()),this,SLOT(mov_fireball()));
    connect(time_ball,SIGNAL(timeout()),this,SLOT(set_imagen()));
}

void fireball::start_timers()
{
    time_ball->start(50);
    time_mov_fireball->start(10);
}

void fireball::stop_timers()
{
    time_ball->stop();
    time_mov_fireball->stop();
}

void fireball::set_imagen()
{
    if (cont == 0) {
        img = ball1;
    } else if (cont == 1) {
        img = ball2;
    } else if (cont == 2) {
        img = ball3;
    } else if (cont == 3) {
        img = ball4;
    } else if (cont == 4) {
        img = ball5;
    } else if (cont == 5) {
        img = ball6;
    }

    setPixmap(img.scaled(80, 80));
}

void fireball::mov_fireball()
{
    // Calcular las posiciones x e y usando las ecuaciones de movimiento
    double x = x0 - (t * V0x);
    double y = y0 - (V0y * t - 0.5 * g * t * t);

    if(y<600) setPos(x,y);// Establecer la posición en la escena
    else{
        y0 = rand() % 501 + 50;
        t=0;
    }


    // Actualizar el tiempo transcurrido

    t += 0.1;
}
