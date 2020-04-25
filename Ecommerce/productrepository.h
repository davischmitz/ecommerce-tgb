#ifndef PRODUCTQUERYBUILDER_H
#define PRODUCTQUERYBUILDER_H

#include "product.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QList>
#include <QDebug>

class ProductRepository {

public:
    ProductRepository();

    bool insert(Product);

    bool remove(Product);

    QList<Product> findAll();

};

#endif // PRODUCTQUERYBUILDER_H
