#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = 0);
    ~GameWindow();
};

#endif // GAMEWINDOW_H
