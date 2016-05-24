#include "mjwindow.h"
#include "ui_mjwindow.h"

MJWindow::MJWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MJWindow)
{
    ui->setupUi(this);
}

MJWindow::~MJWindow()
{
    delete ui;
}
