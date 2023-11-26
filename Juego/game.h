#ifndef GAME_H
#define GAME_H
#include "edificio.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "background.h"
#include "personaje.h"
#include "fireball.h"
#include "weed.h"

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
    personaje *prota;
    fireball *ball;
    weed *maria;

    void set_building(Edificio *edificios);
    void set_background(background *background_game);
    void set_protagonista(personaje *prota);
    void set_fireball(fireball *ball);
    void set_weed(weed* maria);
    void keyPressEvent(QKeyEvent *i);
};

#endif // GAME_H