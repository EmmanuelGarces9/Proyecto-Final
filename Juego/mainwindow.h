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

private slots:
    void update_puntaje();
    void gameover();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    game* juego;
    void startgame();
    int puntaje;
};
#endif // MAINWINDOW_H
