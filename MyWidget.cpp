#include "MyWidget.h"
 

MyWidget::MyWidget(QWidget *parent) : QWidget(parent) {
    setMouseTracking(true);  // tıklama olmadan da hareketi algıla
}

 void MyWidget::mouseMoveEvent(QMouseEvent *event)  {
    QPoint pos = event->pos();               // widget içindeki konum
    qDebug() << "Mouse:" << pos;

    lastPos = pos;                           // çizimde kullanılmak üzere kaydet
    update();                                 // repaint tetikle
}

void MyWidget::paintEvent(QPaintEvent *bilmemNe)  {
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.drawText(lastPos, "← Burada!");
    painter.drawEllipse(lastPos, 5, 5);       // nokta çiz
    painter.drawPoint(lastPos);
}
