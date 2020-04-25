#ifndef CARTFACADE_H
#define CARTFACADE_H

#include <QWidget>

#include "productrepository.h"
#include "productservice.h"
#include "cart.h"

class CartFacade
{
public:
    CartFacade();
    void loadProducts(QVBoxLayout*, QWidget*, Cart *);

private:
    ProductService productService;

};

#endif // CARTFACADE_H
