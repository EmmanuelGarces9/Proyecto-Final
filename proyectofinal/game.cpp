#include "game.h"

game::game()
{
    buildings=new Edificio;
    backgroundgame= new background;
    set_background(backgroundgame);
    set_building(buildings);
}

game::~game()
{
    delete backgroundgame;
    delete buildings;
}

void game::set_building(Edificio *edificios)
{
    addItem(edificios);
}

void game::set_background(background *background_game)
{
    addItem(background_game);
}


