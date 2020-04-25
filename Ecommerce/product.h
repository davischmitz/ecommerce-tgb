#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QList>
#include <QHBoxLayout>

using namespace std;

class Product {

public:
    Product();
    Product(QString, QString, double, QString, QString);

    QString getId();
    QString getName();
    double getPrice();
    QString getImage();
    QString getDescription();

    void setId(QString);
    void setName(QString);
    void setPrice(double);
    void setImage(QString);
    void setDescription(QString);

private:
    QString id;
    QString name;
    double price;
    QString image;
    QString description;
};

#endif // PRODUCT_H
