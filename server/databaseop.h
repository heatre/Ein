/*---------------------------------------------------------------------------------------------
* copyright statement: Copyright 2014 heatre@126.com
* license boilerplate: LGPL
*author:heatre@126.com
*date:2014-12-25
*desc:数据库操作类
*---------------------------------------------------------------------------------------------*/
#ifndef DATABASEOP_H
#define DATABASEOP_H
#include<QString>
#include<QSqlDatabase>
class DatabaseOP
{
public:
    DatabaseOP();
    ~DatabaseOP();
private:
    void ShowAllDatabaseDrivers();
    bool ConnectToMysql();
    bool UserRegister(const QString& login_name,const QString& nickname,const QString & password,
                      const QString & create_time);
private:
     QSqlDatabase mysql_db;
};

#endif // DATABASEOP_H
