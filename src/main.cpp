#include "gamewindow.h"
#include <QApplication>
#include <QString>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile level("maps/campaign/level1.txt") ;
    GameWindow w(level);
    w.show();

    return a.exec();
}
