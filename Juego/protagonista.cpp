#include "protagonista.h"

protagonista::protagonista()
{
    original.load(":/Bomberman/personaje/personaje_mov.png");
    original1.load(":/Bomberman/personaje/personaje2_mov.png");
    original2.load(":/Bomberman/personaje/muerte_personaje.png");
    movimiento[0]=3;movimiento[1]=3;movimiento[2]=0;movimiento[3]=0;
}
