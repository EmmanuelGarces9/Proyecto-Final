#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_window();
    prota = new personaje;
    ball = new fireball;

    time_prota = new QTimer;
    time_ball = new QTimer;
    time_mov_fireball = new QTimer;

    connect(time_prota,SIGNAL(timeout()),this,SLOT(animacion_prota()));
    connect(time_ball,SIGNAL(timeout()),this,SLOT(animacion_fireball()));
    connect(time_mov_fireball,SIGNAL(timeout()),this,SLOT(mov_fireball()));

    juego();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_window()
{
    scene=new QGraphicsScene;
    ui->graphicsView->setGeometry(0, 0, W, H);
    scene->setSceneRect(0, 0,W,H);
    ui->graphicsView->setScene(scene);
    setFixedSize(W,H);
}

void MainWindow::juego()
{
    prota->setPos(220,200);
    scene->addItem(prota);
    prota->set_imagen(0);
    time_prota->start(100);

    ball->setPos(W-120,200);
    scene->addItem(ball);
    ball->set_imagen();
    time_ball->start(50);
    time_mov_fireball->start(10);
}

void MainWindow::keyPressEvent(QKeyEvent *i)
{
    int y=prota->y();
    if(i->key()==Qt::Key_S && y<H-120){
        prota->setY(prota->y()+5);
    }else if(i->key()==Qt::Key_W && y>0){
        prota->setY(prota->y()-5);
    }
}

void MainWindow::animacion_prota()
{
    prota->cambio_imagen();
}

void MainWindow::animacion_fireball()
{
    ball->set_imagen();
}

void MainWindow::mov_fireball()
{

    double g=9.8;

    //y0 = rand() % 481 + 50;  // Rango de y

    double theta = 45;

    double V0x= v0 * cos(theta * (M_PI/180));
    double V0y= v0 * sin(theta * (M_PI/180));

    // Calcular las posiciones x e y usando las ecuaciones de movimiento
    double x = x0 - (t * V0x);
    double y = y0 - (V0y * t - 0.5 * g * t * t);

    if(y<H-50) ball->setPos(x,y);// Establecer la posición en la escena
    else time_mov_fireball->stop();

    // Actualizar el tiempo transcurrido

    t += 0.1;
}

