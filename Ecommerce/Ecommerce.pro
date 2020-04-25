#-------------------------------------------------
#
# Project created by QtCreator 2019-10-30T15:39:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ecommerce
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    catalogfacade.cpp \
    customer.cpp \
    dbmanager.cpp \
    dbmanagersqliteimp.cpp \
        main.cpp \
        mainwindow.cpp \
    person.cpp \
    cart.cpp \
    catalog.cpp \
    product.cpp \
    productrepository.cpp \
    productservice.cpp \
    cartfacade.cpp \
    freight.cpp \
    traditionalfreight.cpp \
    expressfreight.cpp \
    freightfactory.cpp

HEADERS += \
    catalogfacade.h \
    customer.h \
    dbmanager.h \
    dbmanagersqliteimp.h \
        mainwindow.h \
    person.h \
    cart.h \
    catalog.h \
    product.h \
    productrepository.h \
    productservice.h \
    cartfacade.h \
    freight.h \
    traditionalfreight.h \
    expressfreight.h \
    freightfactory.h

FORMS += \
        mainwindow.ui
