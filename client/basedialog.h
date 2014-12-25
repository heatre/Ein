/*---------------------------------------------------------------------------------------------
* copyright statement: Copyright 2014 heatre@126.com
* license boilerplate: LGPL
*author:heatre@126.com
*date:2014-12-25
*desc:基础对话框，重载鼠标事件，可以将鼠标放在对话框窗体内移动对话框。
*---------------------------------------------------------------------------------------------*/
#ifndef BASEDIALOG_H
#define BASEDIALOG_H
#include<QDialog>
#include<QMouseEvent>
class BaseDialog :public QDialog
{
    Q_OBJECT
public:
    explicit BaseDialog(QWidget* parent =0);
    ~BaseDialog();
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
private:
    QPoint last;
};

#endif // BASEDIALOG_H
