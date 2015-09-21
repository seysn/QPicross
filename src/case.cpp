#include "case.h"
#include <QPixmap>

Case::Case(QWidget *parent)
    : QLabel(parent)
{
    this->state = EMPTY;
    this->setPixmap(QPixmap("./img/EmptySquare.png"));
    this->setFixedSize(30, 30);
}

void Case::changeImg()
{
    switch(this->state) {
        case EMPTY:
            this->setPixmap(QPixmap("./img/EmptySquare.png"));
            break;
        case FILLED:
            this->setPixmap(QPixmap("./img/FilledSquare.png"));
            break;
        case CROSSED:
            this->setPixmap(QPixmap("./img/CrossedSquare.png"));
            break;
    }
}

void Case::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton) {
        if (this->state == EMPTY)
            this->state = FILLED;
        else
            this->state = EMPTY;
        changeImg();
        emit click();
    } else if (ev->button() == Qt::RightButton && this->state == EMPTY) {
        this->state = CROSSED;
        changeImg();
        emit click();
    }
}

int Case::getState()
{
    return this->state;
}
