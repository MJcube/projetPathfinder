#ifndef FORMCREA_H
#define FORMCREA_H

#include "personnage.h"

#include <QWidget>

namespace Ui {
class FormCrea;
}

class FormCrea : public QWidget
{
    Q_OBJECT

public:
    explicit FormCrea(QWidget *parent = 0);
    ~FormCrea();

private:
    Ui::FormCrea *ui;
    Personnage *p;

private slots:
    void modifFor(int);
    void modifDex(int);
    void modifCon(int);
    void modifInt(int);
    void modifSag(int);
    void modifCha(int);

    void modifModFor(int);
    void modifModDex(int);
    void modifModCon(int);
    void modifModInt(int);
    void modifModSag(int);
    void modifModCha(int);
};

#endif // FORMCREA_H
