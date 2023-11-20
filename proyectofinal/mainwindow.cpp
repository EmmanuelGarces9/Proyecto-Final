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
    juego->setSceneRect(0, 0,
        ui->graphicsView->width() - 2,
        ui->graphicsView->height() - 2);
    ui->graphicsView->setScene(juego);

}

