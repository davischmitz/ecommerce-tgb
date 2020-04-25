#ifndef client_H
#define client_H

#include <QString>
#include <QList>

#include "person.h"

using namespace std;

class Customer : public Person {

public:
    Customer();
    Customer(QString, QString, QString, QString, QString, QString, QString, QString);

    void printData();

private:
};

#endif // client_H
