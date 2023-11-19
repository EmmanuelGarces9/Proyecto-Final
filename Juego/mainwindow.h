#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "personaje.h"

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

private:
    Ui::MainWindow *ui;
    personaje *prota;
    QGraphicsScene *scene;
    QTimer *time_prota;

private slots:
void animacion_prota();
};
#endif // MAINWINDOW_H
