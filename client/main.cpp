#include <QApplication>
#include"logindlg.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDlg loginDlg;
    loginDlg.show();
    return a.exec();
}
