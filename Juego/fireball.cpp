#include "fireball.h"

fireball::fireball()
{
    ball1.load(":/Imagenes/Bola de fuego/00.png");
    ball2.load(":/Imagenes/Bola de fuego/01.png");
    ball3.load(":/Imagenes/Bola de fuego/02.png");
    ball4.load(":/Imagenes/Bola de fuego/03.png");
    ball5.load(":/Imagenes/Bola de fuego/04.png");
    ball6.load(":/Imagenes/Bola de fuego/05.png");
}

void fireball::set_imagen()
{
    if(cont==0){
        img=ball1;
    }else if(cont==1){
        img=ball2;
    }else if(cont==2){
        img=ball3;
    }else if(cont==3){
        img=ball4;
    }else if(cont==4){
        img=ball5;
    }else if(cont==5){
        img=ball6;
    }
    if(cont!=5) cont++;
    else cont=0;
    setPixmap(img.scaled(50,50));
}
