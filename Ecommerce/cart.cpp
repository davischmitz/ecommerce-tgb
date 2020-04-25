#include "cart.h"

Cart* Cart::instance = nullptr;

Cart::Cart() {}

Cart* Cart::getInstance() { //singleton
    if (!instance) {
        instance = new Cart();
    }

    return instance;
}

double Cart::getSubTotal() {
    return (this->subtotal + this->freight);
}

void Cart::addToCart(Product product) {
    this->products.append(product);
    this->subtotal+=product.getPrice();
}

QList<Product> Cart::getProducts(){
    return this->products;
}

void Cart::setFreight(double freight){
    this->freight = freight;
}
