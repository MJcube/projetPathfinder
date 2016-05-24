#include "cara.h"
#include "competences.h"
#include "sort.h"
#include <QVector>
#include <QString>

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
public:
    Personnage();
    int getFOR() const;
    void setFOR(int value);

    int getDEX() const;
    void setDEX(int value);

    int getCON() const;
    void setCON(int value);

    int getINT() const;
    void setINT(int value);

    int getSAG() const;
    void setSAG(int value);

    int getCHA() const;
    void setCHA(int value);

private:
    QString *nom;
    int age;
    QVector<QString> *races;
    QString *background;
    QString *taille;
    QString *poids;

    QVector<Cara> *c;

    QVector<QString> *classes;
    QVector<Sort> *sorts;

    QVector<QString> *dons;
    QString *traits;

    QVector<Competences> *skills;
    QVector<QString> *langues[];

    QString *alignement;
    QString *religions;

    int sous;
    QString *equip;
    QString *inventaire;
    int pdv;
    int xp;
};

#endif // PERSONNAGE_H
