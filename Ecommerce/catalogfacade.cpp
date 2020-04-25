#include "catalogfacade.h"
#include "product.h"

CatalogFacade::CatalogFacade() {}

void CatalogFacade::loadProducts(QVBoxLayout*parentVBox, QWidget *parent) {
    QList<Product> products = productRepository.findAll();

    for (Product product : products) {
        QHBoxLayout *hBox = productService.buildLayoutFromProduct(product, parent);
        parentVBox->addLayout(hBox);
    }

}
