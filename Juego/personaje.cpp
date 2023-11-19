#include "personaje.h"

personaje::personaje()
{
    move1.load(":/Imagenes/Dragon_protagonista/01.png");
    move2.load("/Imagenes/Dragon_protagonista/02.png");
    move3.load(":/Imagenes/Dragon_protagonista/03.png");
}

void personaje::cambio_imagen()
{
    if(cont==2){
        dir=false;
    }else if(cont==0) dir=true;
    cont+=(2*dir-1);
    set_imagen(cont);
}

void personaje::set_imagen(int a)
{
    if(a==0){
        img=move1;
    }else if(a==1){
        img=move2;
    }else if(a==2){
        img=move3;
    }
    setPixmap(img.scaled(120,120));
}
