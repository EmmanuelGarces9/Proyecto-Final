#ifndef GAME_H
#define GAME_H
#include "edificio.h"
#include <QGraphicsScene>
#include "background.h"

namespace gameValues {

}

class game : public QGraphicsScene
{
    Q_OBJECT
public:
    game();
    ~game();

private:
    Edificio* buildings;
    background *backgroundgame;

    void set_building(Edificio *edificios);
    void set_background(background *background_game);
};

#endif // GAME_H
