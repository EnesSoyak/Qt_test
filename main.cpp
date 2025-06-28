#include "MyWidget.h"

#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

#include <chrono>
#include <iostream>
#include <thread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    MyWidget widget;
    widget.show();
    
    return a.exec();
}

/*
moc MyWidget.h -o moc_MyWidget.cpp

g++ ../main.cpp ../MyWidget.cpp moc_MyWidget.cpp  -o QtDeneme.exe -I../  -IC:\Qt\6.9.1\mingw_64\include -IC:\Qt\6.9.1\mingw_64\include\QtCore  -IC:\Qt\6.9.1\mingw_64\include\QtGui  -IC:\Qt\6.9.1\mingw_64\include\QtWidgets  -LC:\Qt\6.9.1\mingw_64\bin  -lQt6Core -lQt6Widgets -lQt6Gui && QtDeneme
*/
