#ifndef PRODUCTSERVICE_H
#define PRODUCTSERVICE_H

#include "product.h"

#include <QHBoxLayout>

class ProductService {

public:
    ProductService();

    QHBoxLayout* buildLayoutFromProduct(Product, QWidget*);
    QHBoxLayout* buildLayoutFromCartProduct(Product, QWidget*);
};

#endif // PRODUCTSERVICE_H
