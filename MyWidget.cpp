#include "MyWidget.h"
 

MyWidget::MyWidget(QWidget *parent) : QWidget(parent) {
    

}

void MyWidget::paintEvent(QPaintEvent *bilmemNe)  {
    QPainter painter(this);
    QPen pen;  // creates a default pen

    pen.setStyle(Qt::SolidLine);
    // Diğer stiller:
    // Qt::NoPen
    // Qt::SolidLine
    // Qt::DashLine
    // Qt::DotLine
    // Qt::DashDotLine
    // Qt::DashDotDotLine
    // Qt::CustomDashLine
    pen.setWidth(7);
    pen.setBrush(Qt::green);
    pen.setCapStyle(Qt::RoundCap);
    // Diğer uç stilleri:
    // Qt::FlatCap
    // Qt::SquareCap
    // Qt::RoundCap
    pen.setJoinStyle(Qt::RoundJoin);
    // Diğer birleştirme (join) stilleri:
    // Qt::MiterJoin
    // Qt::BevelJoin
    // Qt::RoundJoin
    // Qt::SvgMiterJoin

    

    painter.setPen(pen);
    painter.drawLine(20, 20, width()-20, height()-20);
}
