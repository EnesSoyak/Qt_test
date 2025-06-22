#include "kutup.h"

#include <QApplication>
#include <chrono>
#include <iostream>
#include <thread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kutup w;
    w.show();
    //std::this_thread::sleep_for(std::chrono::seconds(8));
    //w.setStyleSheet("background-color: white; color: white;");
    //std::this_thread::sleep_for(std::chrono::seconds(3));
    //w.show();
    QPushButton button("Merhaba Qt");   // Basit bir buton
    button.show(); 
    return a.exec();
}


