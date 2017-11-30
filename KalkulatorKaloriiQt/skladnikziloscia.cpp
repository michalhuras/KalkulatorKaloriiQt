#include "skladnikziloscia.h"
#include "skladnik.h"
#include <QString>
#include <QStringList>

SkladnikZIloscia::SkladnikZIloscia(QString m_nazwa,                               int m_rodzajSkladnika,                         double m_kcalNaStoGram,                             double m_bialkoNaStoGram,
                                   double m_weglowodanyNaStoGram,                 double m_tluszczeNaStoGram,                    double m_iloscSkladnikaWGramach,                    QString m_slownieIloscSkladnika)
    :                       Skladnik(m_nazwa,m_rodzajSkladnika,m_kcalNaStoGram,m_bialkoNaStoGram,m_weglowodanyNaStoGram,m_tluszczeNaStoGram), iloscSkladnikaWGramach(m_iloscSkladnikaWGramach),   slownieIloscSkladnika(m_slownieIloscSkladnika)
{//tu w przyszlosci napisac funkcje wyswietlajaca komunikat "stworzono nowy skladnik"
}


SkladnikZIloscia::SkladnikZIloscia(Skladnik m_Skladnik ,double m_iloscSkladnikaWGramach, QString m_slownieIloscSkladnika)
    :                      Skladnik(m_Skladnik),iloscSkladnikaWGramach(m_iloscSkladnikaWGramach),   slownieIloscSkladnika(m_slownieIloscSkladnika)
{//tu w przyszlosci napisac funkcje wyswietlajaca komunikat "stworzono nowy skladnik"
}


QStringList SkladnikZIloscia::toQStringList() const
{
    QStringList lista(Skladnik::toQStringList()); //tego nie jestem pewien- chyba jest dobrze, jeżeli byśmy przekazali przez referencję to wtedy wskazywało by na miejsce, którego nie ma, bo po wyjściu z funkcji zostało skasowane :/
    lista<<QString::number(iloscSkladnikaWGramach,'g',3)<<slownieIloscSkladnika;
    return lista;
}
