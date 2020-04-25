#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "product.h"
#include "dbmanagersqliteimp.h"
#include "freightfactory.h"
#include <QPixmap>
#include <QDir>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dbManager = DbManagerSQLiteImp::getInstance();
    dbManager->databaseConnect();

    QVBoxLayout *parentVBox = ui->catalogProductsLayout;
    catalogFacade.loadProducts(parentVBox, this);

    cart = Cart::getInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonAddToCart_clicked()
{

    Product product("100", "Vinho cabernet", 65.25, "vinho.png", "descricao");

    cart->addToCart(product);

    QVBoxLayout *parentVBox = ui->cartProductsLayout;
    cartFacade.loadProducts(parentVBox, this, this->cart);

    this->ui->labelTotal->setText("R$ " + QString::number(cart->getSubTotal()));
}

void MainWindow::on_traditionalFreight_clicked()
{
    FreightFactory *freightFactory;
    freightFactory = new FreightFactory();

    Freight *freight;

    freight = freightFactory->createFreight("T");

    this->cart->setFreight(freight->getPrice());

    this->ui->labelTotal->setText("R$ " + QString::number(cart->getSubTotal()));
}

void MainWindow::on_expressFreight_clicked()
{
    FreightFactory *freightFactory;
    freightFactory = new FreightFactory();

    Freight *freight;

    freight = freightFactory->createFreight("E");

    this->cart->setFreight(freight->getPrice());

    this->ui->labelTotal->setText("R$ " + QString::number(cart->getSubTotal()));
}
