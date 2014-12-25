#include "logindlg.h"
#include "ui_logindlg.h"

LoginDlg::LoginDlg(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
    InitDialog();
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::InitDialog()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->passwordLnEd->setEchoMode(QLineEdit::Password);
}

void LoginDlg::on_closeButton_clicked()
{
    this->close();
}
