#include "catalog.h"

Catalog::Catalog() {}

void Catalog::RegisterProduct(Product product) {
    this->products.append(product);
}

QList<Product> Catalog::ShowProducts() {

}
