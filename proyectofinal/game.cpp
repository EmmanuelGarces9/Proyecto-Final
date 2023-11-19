#include "game.h"

game::game()
{
    buildings=new Edificio;


    set_building(buildings);
}

game::~game()
{
    delete buildings;
}

void game::set_building(Edificio *edificios)
{
    addItem(edificios);
}


