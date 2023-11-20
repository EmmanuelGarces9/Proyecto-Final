#include "game.h"

game::game()
{
    timer = new QTimer;
    for(auto& ptr : buildings) {
        ptr = new Edificio;
    }


    connect(timer, SIGNAL(timeout()), this, SLOT(call_buildings()));
    timer->start(gameValues::buildingSpawnRate);
}

game::~game()
{
    delete timer;
    for(auto& ptr : buildings) {
        delete ptr;
        ptr = nullptr;
    }
}

void game::set_building(Edificio *edificios)
{
    edificios->start_timer();
    addItem(edificios);
}

void game::call_buildings()
{
    if(i + 1 == buildings.size()) {
        timer->stop();
    }
    set_building(buildings[i]);
    i++;
}


