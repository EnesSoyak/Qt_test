#pragma once
#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <QPoint>
#include <QDebug>

class MyWidget : public QWidget {
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
protected:
    void mouseMoveEvent(QMouseEvent *event) override ;
    void paintEvent(QPaintEvent *) override ;

private:
    QPoint lastPos;
};
