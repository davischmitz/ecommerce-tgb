#ifndef CATALOG_H
#define CATALOG_H

#include <QString>
#include <QList>
#include <iostream>

#include "product.h"

using namespace std;

class Catalog {

public:
    Catalog();

    void RegisterProduct(Product);
    QList<Product> ShowProducts();

private:
    QList<Product> products;
};

#endif // CATALOG_H
