#ifndef GAME_H
#define GAME_H
#include "edificio.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "background.h"
#include "personaje.h"
#include "fireball.h"
#include "weed.h"
#include <QWidget>
#include <QLabel>

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
    QTimer *timerCollisions, *dead_time;
    QGraphicsTextItem* gameOverTextItem;
    bool colision;

    void set_building(Edificio *edificios);
    void set_background(background *background_game);
    void set_protagonista(personaje *prota);
    void set_fireball(fireball *ball);
    void set_weed(weed* maria);
    void keyPressEvent(QKeyEvent *i);
    bool suficiente;

public slots:

    void checkColision();

signals:
    void stopgame();
    void counter();

};

#endif // GAME_H
