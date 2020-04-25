#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "cart.h"
#include "catalogfacade.h"
#include "cartfacade.h"
#include "dbmanager.h"
#include "freight.h"

#include <QTextEdit>
#include <QAbstractScrollArea>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

namespace Ui {

class MainWindow;

}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_buttonAddToCart_clicked();

    void on_traditionalFreight_clicked();

    void on_expressFreight_clicked();

private:
    Ui::MainWindow *ui;

    DbManager* dbManager;

    CatalogFacade catalogFacade;
    CartFacade cartFacade;

    Cart* cart;
};

#endif // MAINWINDOW_H
