#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

class personaje: public QObject, public QGraphicsPixmapItem
{
public:
    personaje();
    void cambio_imagen();
    void set_imagen(int a);
private:
    QPixmap move1,move2,move3,img;
    int cont=0;
    bool dir=true;
};

#endif // PERSONAJE_H
