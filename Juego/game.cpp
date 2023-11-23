#include "game.h"

game::game()
{
    buildings=new Edificio;
    backgroundgame= new background;
    prota = new personaje;
    ball = new fireball;
    set_background(backgroundgame);
    set_building(buildings);
    set_protagonista(prota);
    set_fireball(ball);
}

game::~game()
{
    delete backgroundgame;
    delete buildings;
    delete prota;
    delete ball;
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

void game::keyPressEvent(QKeyEvent *i)
{
    int y=prota->y();
    if(i->key()==Qt::Key_S && y<480){
        prota->setY(prota->y()+5);
    }else if(i->key()==Qt::Key_W && y>0){
        prota->setY(prota->y()-5);
    }
}


