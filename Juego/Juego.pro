QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    archivos.cpp \
    background.cpp \
    control_sprite.cpp \
    edificio.cpp \
    fireball.cpp \
    game.cpp \
    main.cpp \
    mainwindow.cpp \
    personaje.cpp \
    weed.cpp

HEADERS += \
    archivos.h \
    background.h \
    control_sprite.h \
    edificio.h \
    fireball.h \
    game.h \
    mainwindow.h \
    personaje.h \
    weed.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Multimedia.qrc

DISTFILES +=
