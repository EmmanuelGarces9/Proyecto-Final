
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

namespace maincharvalues{
    const int vy=-40;
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
    void setYinitial_dead1(int newYinitial);

private:
    QPixmap move1,move2,move3,img;
    QTimer *time_prota, *dead_timer, *dead_timer2;
    int cont=0;
    bool dir=true;
    bool is_alive;
    int posy,posx;
    int dead_vy;
    int yinitial_dead1;
    double t=0, g=9.8, V0=0; //caida libre
    bool deady=false;        //se usa para saber cuándo llegó a la suficiente altura en y



private slots:
    void dead_animation();
    void cambio_imagen();
};

#endif // PERSONAJE_H
