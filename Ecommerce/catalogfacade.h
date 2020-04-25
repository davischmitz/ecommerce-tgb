#ifndef CATALOGFACADE_H
#define CATALOGFACADE_H

#include "productrepository.h"
#include "productservice.h"

#include <QWidget>

class CatalogFacade {

private:
    ProductRepository productRepository;
    ProductService productService;

public:
    CatalogFacade();

    void loadProducts(QVBoxLayout*, QWidget*);
};

#endif // CATALOGFACADE_H
