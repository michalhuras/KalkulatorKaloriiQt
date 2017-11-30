#include <QString>
#include <QStringList>
#include "skladnik.h"

Skladnik::Skladnik(QString m_nazwa,             rodzajSkladnika m_rodzajSkladnika,                         double m_kcalNaStoGram,
                   double m_bialkoNaStoGram,    double m_weglowodanyNaStoGram,                 double m_tluszczeNaStoGram)
    :       nazwa(m_nazwa),                     numRodzajSkladnika(m_rodzajSkladnika),            kcalNaStoGram(m_kcalNaStoGram),
            bialkoNaStoGram(m_bialkoNaStoGram), weglowodanyNaStoGram(m_weglowodanyNaStoGram),  tluszczeNaStoGram(m_tluszczeNaStoGram)
{//tu w przyszlosci napisac funkcje wyswietlajaca komunikat "stworzono nowy skladnik"
}


Skladnik::Skladnik(QString m_nazwa,             int m_rodzajSkladnika,                         double m_kcalNaStoGram,
            double m_bialkoNaStoGram,    double m_weglowodanyNaStoGram,                 double m_tluszczeNaStoGram)
    :       nazwa(m_nazwa),                     numRodzajSkladnika(static_cast<rodzajSkladnika>(m_rodzajSkladnika)),            kcalNaStoGram(m_kcalNaStoGram),
            bialkoNaStoGram(m_bialkoNaStoGram), weglowodanyNaStoGram(m_weglowodanyNaStoGram),  tluszczeNaStoGram(m_tluszczeNaStoGram)
{//tu w przyszlosci napisac funkcje wyswietlajaca komunikat "stworzono nowy skladnik"
}

QStringList Skladnik::toQStringList() const
{
    QStringList lista;
    lista<<nazwa<<toQStringRodzajSkladnika()<<QString::number(kcalNaStoGram,'g',3)<<QString::number(bialkoNaStoGram,'g',3)
         <<QString::number(weglowodanyNaStoGram,'g',3)<<QString::number(tluszczeNaStoGram,'g',3);
    return lista;
}

QString Skladnik::toQStringRodzajSkladnika() const
{
    switch(numRodzajSkladnika)
    {
      case Owoce: return "Owoce";
      case Warzywa: return "Warzywa";
      case Plyny: return "Plyny";
      case Przyprawy: return "Przyprawy";
      case ProduktyPrzetworzone: return "ProduktyPrzetworzone";
    default: return "Brak";
    }
}
