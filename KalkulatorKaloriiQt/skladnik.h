#ifndef SKLADNIK_H
#define SKLADNIK_H
#include <QString>
#include <QStringList>

class Skladnik
{
public:
    enum  rodzajSkladnika {NONE = -1, Owoce, Warzywa, Plyny,Przyprawy, ProduktyPrzetworzone};
    Skladnik(QString m_nazwa,rodzajSkladnika m_rodzajSkladnika,
             double m_kcalNaStoGram,double m_bialkoNaStoGram,
             double m_weglowodanyNaStoGram,double m_tluszczeNaStoGram);
    Skladnik(QString m_nazwa,int m_rodzajSkladnika,
             double m_kcalNaStoGram,double m_bialkoNaStoGram,
             double m_weglowodanyNaStoGram,double m_tluszczeNaStoGram);
    virtual QStringList toQStringList() const;
    QString toQStringRodzajSkladnika() const;
protected:
    QString nazwa;
    rodzajSkladnika numRodzajSkladnika;
    double kcalNaStoGram;
    double bialkoNaStoGram;
    double weglowodanyNaStoGram;
    double tluszczeNaStoGram;
};

#endif // SKLADNIK_H
