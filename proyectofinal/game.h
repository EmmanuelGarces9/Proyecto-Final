#ifndef GAME_H
#define GAME_H
#include "edificio.h"
#include <QGraphicsScene>

class game : public QGraphicsScene
{
    Q_OBJECT
public:
    game();
    ~game();
private:
    Edificio *buildings;
    void set_building(Edificio *edificios);



};

#endif // GAME_H
