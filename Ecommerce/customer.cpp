#include "customer.h"

#include <iostream>

Customer::Customer() {}

Customer::Customer(QString name, QString birthDate, QString email, QString address, QString phone, QString cpf, QString rg, QString password) : Person(name, birthDate, email, address, phone, cpf, rg, password) {

}

void Customer::printData() {
    cout << "Nome: " << getName().toStdString() << endl
         << "Data de nascimento: " << getBirthDate().toStdString() << endl
         << "Email: " << getEmail().toStdString() << endl
         << "Endereco: " << getAddress().toStdString() << endl
         << "Telefone: " << getPhone().toStdString() << endl
         << "CPF: " << getCpf().toStdString() << endl
         << "RG: " << getRg().toStdString() << endl;
}
