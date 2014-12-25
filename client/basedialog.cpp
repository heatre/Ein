#include "basedialog.h"

BaseDialog::BaseDialog(QWidget* parent):QDialog(parent)
{

}

BaseDialog::~BaseDialog()
{

}
void BaseDialog::mousePressEvent(QMouseEvent *e)
{
    last = e->globalPos();
}

void BaseDialog::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    last = e->globalPos();
    move(x()+dx, y()+dy);
}

void BaseDialog::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    move(x()+dx, y()+dy);
}
