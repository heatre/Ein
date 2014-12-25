#include "databaseop.h"
#include<QStringList>
#include<QDebug>
#include<QSqlQuery>
DatabaseOP::DatabaseOP()
{

}

DatabaseOP::~DatabaseOP()
{

}

void DatabaseOP::ShowAllDatabaseDrivers()
{
    QSqlDatabase mysql_db;
    QStringList drivers_list = mysql_db.drivers();
    qDebug()<<drivers_list;
}

bool DatabaseOP::ConnectToMysql()
{
    mysql_db.addDatabase("QMYSQL");
    mysql_db.setHostName("127.0.0.1");
    mysql_db.setPort(3306);
    mysql_db.setDatabaseName("im_db");
    mysql_db.setUserName("root");
    mysql_db.setPassword("123456");
    return mysql_db.open();
}

bool DatabaseOP::UserRegister(const QString& login_name,const QString& nickname,const QString & password,
                              const QString & create_time)
{
    QSqlQuery query;
    query.prepare("insert into users( login_name,nickname,password,create_time)"
                  "values(: login_name, :nickname, :password,create_time)");
    query.bindValue(":login_name",login_name);
    query.bindValue(":nickname",nickname);
    query.bindValue(":password",password);
    query.bindValue(":create_time",create_time);
     return query.exec();
}
