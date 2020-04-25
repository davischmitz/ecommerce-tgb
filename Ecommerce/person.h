#ifndef PERSON_H
#define PERSON_H
#include <QString>

using namespace std;

class Person {

protected:
    QString name;
    QString birthDate;
    QString email;
    QString address;
    QString phone;
    QString cpf;
    QString rg;
    QString password;

public:
    Person();
    Person(QString, QString, QString, QString, QString, QString, QString, QString);

    QString getName();
    QString getBirthDate();
    QString getEmail();
    QString getAddress();
    QString getPhone();
    QString getCpf();
    QString getRg();
    QString getPassword();

    void setName(QString);
    void setBirthDate(QString);
    void setEmail(QString);
    void setAddress(QString);
    void setPhone(QString);
    void setCpf(QString);
    void setRg(QString);
    void setPassword(QString);

    virtual void printData() = 0;
};

#endif // PERSON_H
