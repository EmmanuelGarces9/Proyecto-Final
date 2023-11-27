#include "game.h"
#include "edificio.h"
#include "fireball.h"
#include "personaje.h"



game::game()
{
    buildings=new Edificio;
    backgroundgame= new background;
    prota = new personaje;
    ball = new fireball;
    maria= new weed;
    set_background(backgroundgame);
    set_building(buildings);
    set_protagonista(prota);
    set_fireball(ball);
    set_weed(maria);

    timerCollisions = new QTimer;

    connect(timerCollisions,SIGNAL(timeout()),this,SLOT(checkColision()));
    timerCollisions->start(1);
}

game::~game()
{
    delete backgroundgame;
    delete buildings;
    delete prota;
    delete ball;
    delete maria;
}

void game::set_building(Edificio *edificios)
{
    edificios->start_timer();
    addItem(edificios);
}

void game::set_background(background *background_game)
{
    addItem(background_game);
}

void game::set_protagonista(personaje *prota)
{
    addItem(prota);
    prota->start_timer();
}

void game::set_fireball(fireball *ball)
{
    addItem(ball);
    ball->start_timers();
}

void game::set_weed(weed *maria)
{
    addItem(maria);
}

void game::keyPressEvent(QKeyEvent *i)
{
    if(prota->getIs_alive()){
        int y=prota->y();
        if(i->key()==Qt::Key_S && y<480){
            prota->setY(prota->y()+15);
        }else if(i->key()==Qt::Key_W && y>0){
            prota->setY(prota->y()-15);
        }
    }

}

void game::checkColision()
{

    if(prota->getIs_alive()){
        if (prota->collidesWithItem(buildings))
        {
            qDebug() << "Colision con edificio!";
            prota->setIs_alive(false);
        }else if(prota->collidesWithItem(ball)){
            qDebug() << "Colision con bola de fuego!";
            prota->setIs_alive(false);
        }
        if(prota->collidesWithItem(maria)) qDebug() << "Colision con hoja!";
    }
    else{
        backgroundgame->stop_moving();
        buildings->stop_mov();
        prota->stop();
        ball->stop_timers();
        maria->stop_mov();
        timerCollisions->stop();
        emit stopgame();
    }

}
