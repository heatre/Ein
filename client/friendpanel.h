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
