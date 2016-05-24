#include <QString>

#ifndef MODIFICATEUR_H
#define MODIFICATEUR_H

class Modificateur
{
public:
    Modificateur();
private:
    QString nom;
    QString type;
    int val;
    bool stack;
};

#endif // MODIFICATEUR_H
