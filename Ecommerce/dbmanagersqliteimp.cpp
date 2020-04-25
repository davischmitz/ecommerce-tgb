#include "dbmanagersqliteimp.h"

#include <QFileInfo>
#include <QSqlDatabase>
#include <QString>

DbManagerSQLiteImp* DbManagerSQLiteImp::instance = nullptr;

DbManagerSQLiteImp::DbManagerSQLiteImp() {}

DbManagerSQLiteImp* DbManagerSQLiteImp::getInstance() {
    if (!instance) {
        instance = new DbManagerSQLiteImp();
    }

    return instance;
}

void DbManagerSQLiteImp::databaseConnect() {
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER)) {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        db.setDatabaseName(QFileInfo(".").absolutePath() + "/ecommerce_db.sqlite");

        if(!db.open()) {
            qWarning() << "DbManager::DatabaseConnect - ERROR: ";
        }
    }
    else
        qWarning() << "DbManager::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}
