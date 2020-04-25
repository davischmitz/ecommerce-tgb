#include "product.h"

Product::Product() {}

Product::Product(QString id, QString name, double price, QString image, QString description) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->image = image;
    this->description = description;
}

QString Product::getId(){
    return this->id;
}

QString Product:: getName(){
    return this->name;
}

double Product:: getPrice(){
    return this->price;
}

QString Product:: getImage(){
    return this->image;
}

QString Product:: getDescription(){
    return this->description;
}

void Product:: setId(QString id){
    this->name = id;
}

void Product:: setName(QString name){
    this->name = name;
}

void Product:: setPrice(double price){
    this->price = price;
}

void Product:: setImage(QString image){
    this->image = image;
}

void Product:: setDescription(QString description){
    this->description = description;
}
