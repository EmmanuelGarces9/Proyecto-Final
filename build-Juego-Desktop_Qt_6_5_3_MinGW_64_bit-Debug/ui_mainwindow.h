/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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
    QGraphicsView *graphicsView;
    QLabel *game_over_text;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *readbutton;
    QLabel *history;
    QPushButton *EasyLevel;
    QPushButton *HardLevel;
    QLabel *LevelOption;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(270, 70, 431, 331));
        game_over_text = new QLabel(centralwidget);
        game_over_text->setObjectName("game_over_text");
        game_over_text->setGeometry(QRect(770, 650, 141, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        game_over_text->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 690, 271, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 131, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        readbutton = new QPushButton(centralwidget);
        readbutton->setObjectName("readbutton");
        readbutton->setGeometry(QRect(0, 690, 261, 31));
        history = new QLabel(centralwidget);
        history->setObjectName("history");
        history->setGeometry(QRect(10, 660, 49, 16));
        EasyLevel = new QPushButton(centralwidget);
        EasyLevel->setObjectName("EasyLevel");
        EasyLevel->setGeometry(QRect(510, 650, 75, 25));
        HardLevel = new QPushButton(centralwidget);
        HardLevel->setObjectName("HardLevel");
        HardLevel->setGeometry(QRect(600, 650, 75, 25));
        LevelOption = new QLabel(centralwidget);
        LevelOption->setObjectName("LevelOption");
        LevelOption->setGeometry(QRect(210, 650, 281, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font2.setPointSize(12);
        font2.setBold(true);
        LevelOption->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        game_over_text->setText(QCoreApplication::translate("MainWindow", "  GAME OVER!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PUNTAJE: ", nullptr));
        readbutton->setText(QCoreApplication::translate("MainWindow", "Show history", nullptr));
        history->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EasyLevel->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        HardLevel->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        LevelOption->setText(QCoreApplication::translate("MainWindow", "Escoja un nivel de dificultad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
