#include "joueurwindow.h"
#include "mainwindow.h"
#include "mjwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mjclicked(){
    this->close();
    v = new MJWindow();
    v->show();
}

void MainWindow::playclicked(){
    this->close();
    w = new JoueurWindow();
    w->show();
}
