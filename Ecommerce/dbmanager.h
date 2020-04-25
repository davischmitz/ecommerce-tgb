#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QTextEdit>
#include <product.h>
#include "productrepository.h"

class DbManager {

public:
    DbManager();
    virtual ~DbManager();

    virtual void databaseConnect() = 0;

};

#endif // DBMANAGER_H
