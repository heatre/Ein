#include "friendpanel.h"
#include "ui_friendpanel.h"

FriendPanel::FriendPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FriendPanel)
{
    ui->setupUi(this);
}

FriendPanel::~FriendPanel()
{
    delete ui;
}
