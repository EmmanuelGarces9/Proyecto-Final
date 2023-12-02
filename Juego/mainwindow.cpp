#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1000, 600);
    files=new archivos;
    puntaje=0;
    juego=new game;
    startgame();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete juego;
    delete files;
}

void MainWindow::update_puntaje()
{
    puntaje++;
    QString qtexto = "PUNTAJE: ";
    qtexto += QString::number(puntaje);


    ui->label->setText(qtexto);
}


void MainWindow::startgame()
{
    connect(juego, SIGNAL(stopgame()),this, SLOT(gameover()));
    connect(juego, SIGNAL(counter()), this, SLOT(update_puntaje()));
    ui->graphicsView->setGeometry(0, 0, width(), height());
    juego->setSceneRect(0, 0,
                        ui->graphicsView->width() - 2,
                        ui->graphicsView->height() - 2);
    ui->graphicsView->setScene(juego);
    QString qtexto = "PUNTAJE: 0";
    ui->label->setText(qtexto);
    ui->label->setGeometry(45,-110, 500, 300);
}

void MainWindow::gameover()
{
    files->write_file(puntaje);
    ui->game_over_text->setGeometry(440, 200, 200, 150);
    ui->pushButton->setGeometry(350, 547, 300, 50);
}


void MainWindow::on_pushButton_clicked()
{
    puntaje=0;
    ui->pushButton->setGeometry(240, -150, 300, 150);
    ui->game_over_text->setGeometry(240, -150, 300, 150);
    delete juego;
    juego=new game;
    QString qtexto = "PUNTAJE: 0";
    ui->label->setText(qtexto);
    ui->label->setGeometry(45,-110, 500, 300);
    startgame();
}

MainWindow::MainWindow(double V0, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1000, 600);

    juego=new game;
    juego->setFireballVelocity(V0);
    startgame();
}


