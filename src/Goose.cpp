#include "Goose.hpp"
#include <Qt>

Goose::Goose(QWidget *parent):QGraphicsView(parent){

    goose_img.load("../assets/goose.png");
    goose_scene.addPixmap(goose_img);

    setWindowFlag(Qt::FramelessWindowHint, true);
    setStyleSheet("background:transparent;");
    setAttribute(Qt::WA_TranslucentBackground, true);
    setScene(&goose_scene);
}

void Goose::mouseMoveEvent(QMouseEvent *event){
    
}