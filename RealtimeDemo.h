#ifndef REALTIMEDEMO_H
#define REALTIMEDEMO_H


#include <QRealtimeDemo>
#include <QPainter>
#include <QRect>
#include <QBrush>

namespace Ui {
class RealtimeDemo;
}

class RealtimeDemo : public QRealtimeDemo
{
    Q_OBJECT

public:
    explicit RealtimeDemo(QWidget *parent = 0);
    ~RealtimeDemo();

private:
    Ui::RealtimeDemo *ui;

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // REALTIMEDEMO_H
