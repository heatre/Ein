/*---------------------------------------------------------------------------------------------
* copyright statement: Copyright 2014 heatre@126.com
* license boilerplate: LGPL
*author:heatre@126.com
*date:2014-12-25
*desc:好友显示面板
*---------------------------------------------------------------------------------------------*/
#ifndef FRIENDPANEL_H
#define FRIENDPANEL_H

#include <QDialog>

namespace Ui {
class FriendPanel;
}

class FriendPanel : public QDialog
{
    Q_OBJECT

public:
    explicit FriendPanel(QWidget *parent = 0);
    ~FriendPanel();

private:
    Ui::FriendPanel *ui;
};

#endif // FRIENDPANEL_H
