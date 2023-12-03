#ifndef MUSIC_H
#define MUSIC_H

#include <QtMultimedia>
#include <QObject>
#include <QMediaPlayer>

class music : public QObject
{
    Q_OBJECT
public:
    music();
    ~music();
    void stop_music();
    void start_music();
    void reset_music();
    void select_song(const char option);
private:
    QMediaPlayer *song;
private slots:
    void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);
};

#endif // MUSIC_H
