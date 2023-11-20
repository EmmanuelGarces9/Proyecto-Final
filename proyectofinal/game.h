#ifndef GAME_H
#define GAME_H
#include "edificio.h"
#include <QGraphicsScene>

namespace gameValues {
    const int buildingSpawnRate = 1000;
}

class game : public QGraphicsScene
{
    Q_OBJECT
public:
    game();
    ~game();

private:
    int i;
    QTimer* timer;
    std::array<Edificio*, 6>buildings;

    void set_building(Edificio *edificios);

private slots:
    void call_buildings();

};

#endif // GAME_H
