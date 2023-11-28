#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    double initialVelocity = 90.0;
    if (argc >= 2) {
        int numero = atoi(argv[1]);
        initialVelocity = static_cast<double>(numero);
    }
    MainWindow w(initialVelocity);
    w.show();
    w.startgame();
    return a.exec();
}
