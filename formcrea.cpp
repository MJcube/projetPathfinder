#include "formcrea.h"
#include "ui_formcrea.h"

FormCrea::FormCrea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCrea)
{
    ui->setupUi(this);
    p = new Personnage();
}

FormCrea::~FormCrea()
{
    delete ui;
}

void FormCrea::modifFor(int i){
    this->p->setFOR(i);
    ui->label_12->setText(QString::number(p->getFOR()));
}

void FormCrea::modifDex(int i){
    this->p->setDEX(i);
    ui->label_13->setText(QString::number(p->getDEX()));
}

void FormCrea::modifCon(int i){
    this->p->setCON(i);
    ui->label_14->setText(QString::number(p->getCON()));
}

void FormCrea::modifInt(int i){
    this->p->setINT(i);
    ui->label_15->setText(QString::number(p->getINT()));
}

void FormCrea::modifSag(int i){
    this->p->setSAG(i);
    ui->label_16->setText(QString::number(p->getSAG()));
}

void FormCrea::modifCha(int i){
    this->p->setCHA(i);
    ui->label_23->setText(QString::number(p->getCHA()));
}

void FormCrea::modifModFor(int)
{
    if (this->p->getFOR()<10){
       ui->label_17->setText(QString::number((this->p->getFOR()-10)/2));
    }
    else{
       ui->label_17->setText("+"+QString::number((this->p->getFOR()-10)/2));
    }
}

void FormCrea::modifModDex(int)
{
    if (this->p->getDEX()<10){
        ui->label_18->setText(QString::number((this->p->getDEX()-10)/2));
    }
    else{
        ui->label_18->setText("+"+QString::number((this->p->getDEX()-10)/2));
    }
}

void FormCrea::modifModCon(int)
{
    if (this->p->getCON()<10){
        ui->label_19->setText(QString::number((this->p->getCON()-10)/2));
    }
    else{
        ui->label_19->setText("+"+QString::number((this->p->getCON()-10)/2));
    }
}

void FormCrea::modifModInt(int)
{
    if (this->p->getINT()<10){
        ui->label_20->setText(QString::number((this->p->getINT()-10)/2));
    }
    else{
        ui->label_20->setText("+"+QString::number((this->p->getINT()-10)/2));
    }
}

void FormCrea::modifModSag(int)
{
    if (this->p->getSAG()<10){
        ui->label_21->setText(QString::number((this->p->getSAG()-10)/2));
    }
    else{
        ui->label_21->setText("+"+QString::number((this->p->getSAG()-10)/2));
    }
}

void FormCrea::modifModCha(int)
{
    if (this->p->getCHA()<10){
        ui->label_24->setText(QString::number((this->p->getCHA()-10)/2));
    }
    else{
        ui->label_24->setText("+"+QString::number((this->p->getCHA()-10)/2));
    }
}
