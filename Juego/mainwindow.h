#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MainWindow(double V0,QWidget *parent = nullptr);
    void startgame();

private slots:
    void update_puntaje();
    void gameover();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    game* juego;
<<<<<<< HEAD
    void startgame();
=======
>>>>>>> d8dfba84c56c5a981fcd208227ba0f9c94900d1c
    int puntaje=0;
};
#endif // MAINWINDOW_H
