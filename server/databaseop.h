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
