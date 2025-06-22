#include "kutup.h"


kutup::kutup(QWidget *parent)
    : QWidget(parent)
{
    move(200,0);
    resize(100,200);
    setStyleSheet("background-color: black; color: white;");
    setWindowTitle ("hizli ol lan");
    setCursor(Qt::ForbiddenCursor);
}

kutup::~kutup() {}
