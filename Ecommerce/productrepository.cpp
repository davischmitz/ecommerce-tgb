#include "productrepository.h"

ProductRepository::ProductRepository() {}

bool ProductRepository::insert(Product product){
    QSqlQuery query;
    query.prepare("INSERT INTO product (name, price, image, description) "
                  "VALUES (:name, :price, :image, :description)");
    query.bindValue(":name", product.getName());
    query.bindValue(":price", QString::number(product.getPrice()));
    query.bindValue(":image", product.getImage());
    query.bindValue(":description", product.getDescription());

    return query.exec();
}

bool ProductRepository::remove(Product product){

}

QList<Product> ProductRepository::findAll() {
    QList<Product> products;

    QSqlQuery query ("SELECT * FROM product");

    QSqlRecord rec = query.record();

    int nameCol = rec.indexOf("name");
    int priceCol = rec.indexOf("price");
    int imageCol = rec.indexOf("image");
    int descriptionCol = rec.indexOf("description");

    while (query.next()) {
        Product product;

        product.setName(query.value(nameCol).toString());
        product.setPrice(query.value(priceCol).toDouble());
        product.setImage(query.value(imageCol).toString());
        product.setDescription(query.value(descriptionCol).toString());

        products.append(product);
    }

    return products;
}
