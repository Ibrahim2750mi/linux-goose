#include <map>
#include <array>

#include <QGraphicsView>
#include <QMediaPlayer>

class Goose: public QGraphicsView{
    public:
        explicit Goose(int mh, int mw, QWidget *parent = nullptr);
        void timerEvent(QTimerEvent *event);
    private:
        
        int gx = 500, gy = 200;
        int monitor_h, monitor_w, rotation;

        QPixmap goose_img;
        QGraphicsScene goose_scene;
        QTransform tr;
        QMediaPlayer player;

        std::map<std::string, std::array<std::array<int, 2>, 2>> dirs;
        std::array<const char*, 8> dirs_string;
        int walk_dir_timer = 2;
        int quack_timer = 1;
        int walk = 0;
        std::string dir_facing = "W";
        std::string dir_to_face = "";
        int div = 45;

        void initialise_dir_map();
        void img_reload();
};