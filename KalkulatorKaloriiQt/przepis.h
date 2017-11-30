#ifndef PRZEPIS_H
#define PRZEPIS_H
#include <QList>
#include <QString>
#include "skladnikziloscia.h"

class SposobPrzygotowania;

class Przepis
{
public:
    Przepis();

private:
    QList<SkladnikZIloscia> listaSkladnikow;
    SposobPrzygotowania* e_sposobPrzygotowania;
    double masaDlaNominalnejIlosciSkladnikow;
    double kcalNaStoGramPotrawy;
    double bialkoNaStoGramPotrawy;
    double weglowodanyNaStoGramPotrawy;
    double tluszczeNaStoGramPotrawy;
    QString toQString();
    bool isSkladnik();
    bool addSkladnik();
    bool removeSkladnik();
    bool replaceOrAddprzepis();
};

#endif // PRZEPIS_H
