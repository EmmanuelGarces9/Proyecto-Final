/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *Game_View_1;
    QLabel *Puntaje;
    QLabel *Game_Over_Text;
    QPushButton *Reset;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Game_View_1 = new QGraphicsView(centralwidget);
        Game_View_1->setObjectName("Game_View_1");
        Game_View_1->setGeometry(QRect(0, 0, 800, 600));
        Puntaje = new QLabel(centralwidget);
        Puntaje->setObjectName("Puntaje");
        Puntaje->setGeometry(QRect(10, 10, 230, 50));
        Game_Over_Text = new QLabel(centralwidget);
        Game_Over_Text->setObjectName("Game_Over_Text");
        Game_Over_Text->setGeometry(QRect(240, -150, 300, 150));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        Game_Over_Text->setFont(font);
        Game_Over_Text->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        Game_Over_Text->setAlignment(Qt::AlignCenter);
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        Reset->setGeometry(QRect(20, 600, 761, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Puntaje->setText(QCoreApplication::translate("MainWindow", "Puntaje: ", nullptr));
        Game_Over_Text->setText(QCoreApplication::translate("MainWindow", "Game Over", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
