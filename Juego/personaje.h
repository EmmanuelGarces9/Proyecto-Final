
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

namespace maincharvalues{
    const int vy=-40;
    const int dead_ay=5;
    const int dead_limit_y=800;
}

class personaje: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    personaje();
    ~personaje();
    void set_imagen(int a);
    void start_timer();
    bool getIs_alive() const;
    void setIs_alive(bool newIs_alive);
    void stop();
    void start_dead();

private:
    QPixmap move1,move2,move3,img;
    QTimer *time_prota, *dead_timer;
    int cont=0;
    bool dir=true;
    bool is_alive;
    int posy,posx;
    int dead_vy;

private slots:
    void dead_animation();
    void cambio_imagen();
};

#endif // PERSONAJE_H
