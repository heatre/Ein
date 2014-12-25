/*---------------------------------------------------------------------------------------------
* copyright statement: Copyright 2014 heatre@126.com
* license boilerplate: LGPL
*author:heatre@126.com
*date:2014-12-25
*desc:用户登录对话框。
*---------------------------------------------------------------------------------------------*/
#ifndef LOGINDLG_H
#define LOGINDLG_H

#include"basedialog.h"
namespace Ui {
class LoginDlg;
}

class LoginDlg : public BaseDialog
{
    Q_OBJECT

public:
    explicit LoginDlg(QWidget *parent = 0);
    ~LoginDlg();
private slots:
    void on_closeButton_clicked();

private:
    void InitDialog();
private:
    Ui::LoginDlg *ui;
};

#endif // LOGINDLG_H
