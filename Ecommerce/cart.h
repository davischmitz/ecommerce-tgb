#ifndef CART_H
#define CART_H

#include "product.h"
#include "freight.h"

using namespace std;

class Cart {

public:
    static Cart* getInstance();

    void addToCart(Product);

    double getSubTotal();
    QList<Product> getProducts();

    void setFreight(double);

private:
    Cart();
    static Cart* instance;

    double subtotal;
    QList<Product> products;

    double freight;
};

#endif // CART_H
