#include "productservice.h"

#include <QFileInfo>
#include <QLabel>
#include <QPushButton>

ProductService::ProductService() {}

QHBoxLayout* ProductService::buildLayoutFromProduct(Product product, QWidget *parent) {
    QHBoxLayout *hBox = new QHBoxLayout;

    QLabel *labelProductName = new QLabel(parent);
    labelProductName->setText(product.getName());
    labelProductName->setAlignment(Qt::AlignCenter);

    QLabel *labelProductPrice = new QLabel(parent);
    labelProductPrice->setText(QString::fromStdString("R$ ") + QString::number(product.getPrice()));
    labelProductPrice->setAlignment(Qt::AlignCenter);

    QPushButton *buttonAddToCart = new QPushButton(parent);
    buttonAddToCart->setText("Adicionar ao carrinho");

    QString filename = QFileInfo(".").absolutePath() + "/assets/" + product.getImage();
    QLabel *productLabel = new QLabel(parent);

    productLabel->setAlignment(Qt::AlignCenter);
    productLabel->setGeometry(0, 0, 200, 300);
    QPixmap pix;

    if (pix.load(filename)) {
        pix = pix.scaled(productLabel->size(), Qt::KeepAspectRatio);
        productLabel->setPixmap(pix);
    }

    hBox->setDirection(QBoxLayout::TopToBottom);
    hBox->addWidget(labelProductName);
    hBox->addWidget(productLabel);
    hBox->addWidget(labelProductPrice);
    hBox->addWidget(buttonAddToCart);

    return hBox;
}

QHBoxLayout* ProductService::buildLayoutFromCartProduct(Product product, QWidget *parent) {
    QHBoxLayout *hBox = new QHBoxLayout;

    QLabel *labelProductName = new QLabel(parent);
    labelProductName->setText(product.getName());
    labelProductName->setAlignment(Qt::AlignCenter);

    QLabel *labelProductPrice = new QLabel(parent);
    labelProductPrice->setText(QString::fromStdString("R$ ") + QString::number(product.getPrice()));
    labelProductPrice->setAlignment(Qt::AlignCenter);

    QString filename = QFileInfo(".").absolutePath() + "/assets/" + product.getImage();
    QLabel *productLabel = new QLabel(parent);

    productLabel->setAlignment(Qt::AlignCenter);
    productLabel->setGeometry(0, 0, 200, 300);
    QPixmap pix;

    if (pix.load(filename)) {
        pix = pix.scaled(productLabel->size(), Qt::KeepAspectRatio);
        productLabel->setPixmap(pix);
    }

    hBox->setDirection(QBoxLayout::TopToBottom);
    hBox->addWidget(labelProductName);
    hBox->addWidget(productLabel);
    hBox->addWidget(labelProductPrice);

    return hBox;
}
