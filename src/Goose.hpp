#include <QGraphicsView>

class Goose: public QGraphicsView{
    public:
        explicit Goose(QWidget *parent = nullptr);
        void mouseMoveEvent(QMouseEvent *event);
    private:
        int dx = x(), dy = y();
        QPixmap goose_img;
        QGraphicsScene goose_scene;
};