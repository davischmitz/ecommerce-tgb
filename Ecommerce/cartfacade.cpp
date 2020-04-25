#include "cartfacade.h"
#include "product.h"

CartFacade::CartFacade()
{

}

void CartFacade::loadProducts(QVBoxLayout*parentVBox, QWidget *parent, Cart *cart) {
    QList<Product> products = cart->getProducts();

    for (Product product : products) {
        QHBoxLayout *hBox = productService.buildLayoutFromCartProduct(product, parent);
        parentVBox->addLayout(hBox);
    }

}

