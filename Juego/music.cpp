#include "music.h"

music::music()
{
    song = new QMediaPlayer;
}

music::~music()
{
    delete song;
}

void music::stop_music()
{
    song->stop();
}

void music::start_music()
{
    song->play();
}

void music::reset_music()
{
    song->setPosition(0);
    start_music();
}

void music::select_song(const char option)  //seleccionar la cancion
{
    QString fileName;
    switch(option) {
    case 1:
        fileName = ""; //url cancion1
        break;
    case 2:
        fileName = ""; //url cancion2
    }
    //song->setMedia(QUrl(fileName)); //no me sirve setMedia en mi pc, ni setUrl ni nada
}

void music::handleMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if(status == QMediaPlayer::EndOfMedia) {
        reset_music();
    }
}
