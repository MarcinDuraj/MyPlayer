#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_A_File_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_sliderVolume_sliderMoved(int position);

    //void on_positionChanged(qint64 position);

    //void on_durationChanged(qint64 position);

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // MAINWINDOW_H
