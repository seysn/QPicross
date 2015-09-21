#ifndef CASE_H
#define CASE_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

enum { EMPTY, FILLED, CROSSED };

class Case : public QLabel
{
public:
    Case(QWidget *parent = 0);
    void changeImg();
    int getState();

signals:
    void click();

protected:
    void mousePressEvent(QMouseEvent *ev) Q_DECL_OVERRIDE;

private:
    int state;
};

#endif // CASE_H
