#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <cmath>
#include "personaje.h"
#include "fireball.h"

#define W 1000
#define H 600

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *i);
    void set_window();
    void juego();
    double calculateAngle(double posY);
private:
    Ui::MainWindow *ui;
    personaje *prota;
    fireball *ball;
    QGraphicsScene *scene;
    QTimer *time_prota, *time_ball, *time_mov_fireball;
    double x0=W-120, y0=200, v0=70;  // Propiedades fisicas
    double t = 0;

private slots:
    void animacion_prota();
    void animacion_fireball();
    void mov_fireball();
};
#endif // MAINWINDOW_H
