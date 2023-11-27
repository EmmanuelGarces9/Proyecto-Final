
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

class personaje: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    personaje();
    void set_imagen(int a);
    void start_timer();
    bool getIs_alive() const;
    void setIs_alive(bool newIs_alive);
    void stop();

private:
    QPixmap move1,move2,move3,img;
    QTimer *time_prota;
    int cont=0;
    bool dir=true;
    bool is_alive;
private slots:
    void cambio_imagen();
};

#endif // PERSONAJE_H
