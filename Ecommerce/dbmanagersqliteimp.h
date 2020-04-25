#ifndef DBMANAGERSQLITEIMP_H
#define DBMANAGERSQLITEIMP_H
#include "dbmanager.h"

#include <QDebug>


class DbManagerSQLiteImp : public DbManager {


private:
    DbManagerSQLiteImp();

    static DbManagerSQLiteImp* instance;

public:
    static DbManagerSQLiteImp* getInstance();

    void databaseConnect();
};

#endif // DBMANAGERSQLITEIMP_H
