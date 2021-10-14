#include <iostream>

#include <QApplication>
#include <QScreen>

#include "Goose.hpp"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    int h = app.screens()[0]->size().height();
    int w = app.screens()[0]->size().width();
    Goose goose(h, w);
    goose.show();

    return app.exec();
}