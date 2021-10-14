#include <iostream>

#include <QApplication>

#include "Goose.hpp"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Goose goose;
    goose.show();

    return app.exec();
}