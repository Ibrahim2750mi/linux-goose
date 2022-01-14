#include <iostream>
#include <array>
#include <cmath>
#include <string>

#include <Qt>
#include <QGraphicsPixmapItem>
#include <QTimerEvent>

#include <Goose.hpp>

Goose::Goose(int mh, int mw, QWidget *parent):QGraphicsView(parent),
    monitor_h(mh), monitor_w(mw){

    rotation = 0;
    goose_img.load("../assets/goose.png");
    goose_scene.addPixmap(goose_img);

    setWindowFlag(Qt::FramelessWindowHint, true);
    setStyleSheet("background:transparent;");
    setAttribute(Qt::WA_TranslucentBackground, true);

    setFixedHeight(200);
    setFixedWidth(200);

    setScene(&goose_scene);
    walk_dir_timer = startTimer(10000);
    initialise_dir_map();
}

void Goose::mouseMoveEvent(QMouseEvent *event){
    
}

void Goose::timerEvent(QTimerEvent *event){
    if (event->timerId() == walk_dir_timer){
        dir_to_face = dirs_string[rand() % 8];
        if (walk != 0){
            killTimer(walk);
        }
        img_reload();
        walk = startTimer(1000);
        if (rotation != 0){
            tr.rotate(-rotation);
        }
        tr.rotate(div*(dirs[dir_to_face][0][0]));
        rotation = div*(dirs[dir_to_face][0][0]);
        goose_img = goose_img.transformed(tr);

        goose_scene.addPixmap(goose_img);
        setScene(&goose_scene);

        dir_facing = dir_to_face;

    }else if (event->timerId() == walk){
        gx += dirs[dir_facing][1][0] * 10;
        gy += dirs[dir_facing][1][1] * 10;
        move(gx, gy);
    }

}

void Goose::initialise_dir_map(){
    int trend_x = 0, trend_y = -1, fx = -1, fy = 0;

    dirs_string = {"W", "NW", "N", "NE", "E", "SE", "S", "SW"};

    for (int i = 0; i < 8; i++){
        std::array<int, 2> lower_arr;
        std::array<std::array<int, 2>, 2> uppr_arr;

        if (fx == -1 && fy == 1){
            trend_y = -1;
		    trend_x = 0;
        }else if(fx == -1 && fy == -1){
            trend_x = 1;
		    trend_y = 0;
        }else if(fx == 1 && fy == -1){
            trend_y = 1;
		    trend_x = 0;
        }else if(fx == 1 && fy == 1){
            trend_y = 0;
		    trend_x = -1;
        }
        uppr_arr[0][0] = i;
        uppr_arr[0][1] = i;
        lower_arr[0] = fx;
        lower_arr[1] = fy;
        uppr_arr[1] = lower_arr;
        dirs.emplace(dirs_string[i], uppr_arr);
        fx += trend_x;
        fy += trend_y;
    
    }
}

void Goose::img_reload(){
    goose_img.load("../assets/goose.png");
    goose_scene.clear();
}