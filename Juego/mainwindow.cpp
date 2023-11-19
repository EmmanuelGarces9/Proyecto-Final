#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_window();
    prota= new personaje;
    time_prota=new QTimer;

    connect(time_prota,SIGNAL(timeout()),this,SLOT(animacion_prota()));

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
    prota->set_imagen(0);
    prota->setPos(220,200);
    scene->addItem(prota);
    time_prota->start(50);
}

void MainWindow::animacion_prota()
{
    prota->cambio_imagen();
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
