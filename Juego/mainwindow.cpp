#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1000, 600);

    juego=new game;
    startgame();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete juego;
}


void MainWindow::startgame()
{
    connect(juego, SIGNAL(stopgame()),this, SLOT(gameover()));
    ui->graphicsView->setGeometry(0, 0, width(), height());
    juego->setSceneRect(0, 0,
                        ui->graphicsView->width() - 2,
                        ui->graphicsView->height() - 2);
    ui->graphicsView->setScene(juego);
}

void MainWindow::gameover()
{
    ui->game_over_text->setGeometry(440, 200, 200, 150);
    ui->pushButton->setGeometry(350, 547, 300, 50);
}


void MainWindow::on_pushButton_clicked()
{
    ui->game_over_text->setGeometry(240, -150, 300, 150);
    delete juego;
    juego=new game;
    startgame();
}

