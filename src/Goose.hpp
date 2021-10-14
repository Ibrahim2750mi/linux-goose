#include <map>
#include <array>

#include <QGraphicsView>

class Goose: public QGraphicsView{
    public:
        explicit Goose(int mh, int mw, QWidget *parent = nullptr);
        void mouseMoveEvent(QMouseEvent *event);
        void timerEvent(QTimerEvent *event);
    private:
        
        int gx = x(), gy = y();
        int monitor_h, monitor_w;

        QPixmap goose_img;
        QGraphicsScene goose_scene;
        QGraphicsItem* goose_item;
        QTransform tr;

        std::map<std::string, std::array<std::array<int, 2>, 2>> dirs;
        std::array<std::string, 8> dirs_string;
        int walk_dir_timer;
        int walk = 0;
        std::string dir_facing = "W";
        std::string dir_to_face = "";
        int div = 45;

        void initialise_dir_map();
};