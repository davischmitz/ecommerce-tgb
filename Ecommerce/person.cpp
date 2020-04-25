#include "person.h"

Person::Person() {}

Person::Person(QString name, QString birthDate, QString email, QString address, QString phone, QString cpf, QString rg, QString password) {
    this->name = name;
    this->birthDate = birthDate;
    this->email = email;
    this->address = address;
    this->phone = phone;
    this->cpf = cpf;
    this->rg = rg;
    this->password = password;
}

QString Person::getAddress(){
    return this->address;
}

QString Person:: getName(){
    return this->name;
}

QString Person:: getBirthDate(){
    return this->birthDate;
}

QString Person:: getEmail(){
    return this->email;
}

QString Person:: getPhone(){
    return this->phone;
}

QString Person:: getCpf(){
    return this->cpf;
}

QString Person:: getRg(){
    return this->rg;
}

void Person:: setName(QString name){
    this->name = name;
}

void Person:: setBirthDate(QString birthDate){
    this->birthDate = birthDate;
}

void Person:: setEmail(QString email){
    this->email = email;
}

void Person:: setAddress(QString address){
    this->address = address;
}

void Person:: setPhone(QString phone){
    this->phone = phone;
}

void Person:: setCpf(QString cpf){
    this->cpf = cpf;
}

void Person:: setRg(QString rg){
    this->rg = rg;
}

void Person:: setPassword(QString password){
    this->password = password;
}
