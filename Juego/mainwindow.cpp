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
    juego =new game(0,0,-1,0);
    ui->graphicsView->setGeometry(0, 0, width(), height());
    juego->setSceneRect(0, 0,
                        ui->graphicsView->width() - 2,
                        ui->graphicsView->height() - 2);
    ui->graphicsView->setScene(juego);
    ui->LevelOption->setGeometry(370, 250, 281, 21);
    ui->EasyLevel->setGeometry(390, 300, 75, 25);
    ui->HardLevel->setGeometry(550, 300, 75, 25);
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
    ui->pushButton->setGeometry(350-200, 547, 300, 50);
    ui->readbutton->setGeometry(350+200, 547, 300, 50);
}


void MainWindow::on_pushButton_clicked()
{
    puntaje=0;
    ui->history->setGeometry(240, 900, 300, 150);
    ui->pushButton->setGeometry(240, -150, 300, 150);
    ui->game_over_text->setGeometry(240, -150, 300, 150);
    ui->readbutton->setGeometry(240, -150, 300, 150);
    ui->LevelOption->setGeometry(370, 250, 281, 21);
    ui->EasyLevel->setGeometry(390, 300, 75, 25);
    ui->HardLevel->setGeometry(550, 300, 75, 25);
    QString qtexto = "PUNTAJE: 0";
    ui->label->setText(qtexto);
    ui->label->setGeometry(45,-110, 500, 300);
}

void MainWindow::on_readbutton_clicked()
{
    ui->game_over_text->setGeometry(240, -150, 300, 150);
    ui->label->setGeometry(240, -150, 300, 150);
    ui->readbutton->setGeometry(240, -150, 300, 150);
    juego->to_show_history();
    string info;
    info=files->read_file();
    QString qinfo=QString::fromStdString(info);
    ui->history->setText(qinfo);
    ui->history->setGeometry(45,20,500,300);
}

void MainWindow::on_EasyLevel_clicked()
{
    ui->LevelOption->setGeometry(240, -150, 300, 150);
    ui->EasyLevel->setGeometry(240, -150, 300, 150);
    ui->HardLevel->setGeometry(240, -150, 300, 150);
    delete juego;
    juego=new game(8,10,25,10);
    QString qtexto = "PUNTAJE: 0";
    ui->label->setText(qtexto);
    ui->label->setGeometry(45,-110, 500, 300);
    startgame();
}

void MainWindow::on_HardLevel_clicked()
{
    ui->LevelOption->setGeometry(240, -150, 300, 150);
    ui->EasyLevel->setGeometry(240, -150, 300, 150);
    ui->HardLevel->setGeometry(240, -150, 300, 150);
    delete juego;
    juego=new game(12,20,10,20);
    QString qtexto = "PUNTAJE: 0";
    ui->label->setText(qtexto);
    ui->label->setGeometry(45,-110, 500, 300);
    startgame();
}

