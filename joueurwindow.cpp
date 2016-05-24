#include "joueurwindow.h"
#include "ui_joueurwindow.h"

JoueurWindow::JoueurWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JoueurWindow)
{
    ui->setupUi(this);
    QObject::connect(this->ui->actionNouveau,SIGNAL(triggered()),this,SLOT(newClicked()));
}
void JoueurWindow::newClicked(){
    contenu = new FormCrea();
    this->setCentralWidget(contenu);
    this->repaint();
}

JoueurWindow::~JoueurWindow()
{
    delete ui;
}
