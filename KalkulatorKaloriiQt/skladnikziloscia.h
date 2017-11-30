#ifndef SKLADNIKZILOSCIA_H
#define SKLADNIKZILOSCIA_H
#include "skladnik.h"
#include <QString>


class SkladnikZIloscia :public Skladnik
{
protected:
    double iloscSkladnikaWGramach;
    QString slownieIloscSkladnika;
public:
    SkladnikZIloscia(QString m_nazwa,int m_rodzajSkladnika,
             double m_kcalNaStoGram,double m_bialkoNaStoGram,
             double m_weglowodanyNaStoGram,double m_tluszczeNaStoGram,
             double m_iloscSkladnikaWGramach, QString m_slownieIloscSkladnika ="NULL"
             );
    SkladnikZIloscia(Skladnik m_skladnik,double m_iloscSkladnikaWGramach, QString m_slownieIloscSkladnika);
    QStringList toQStringList() const;

};

#endif // SKLADNIKZILOSCIA_H
