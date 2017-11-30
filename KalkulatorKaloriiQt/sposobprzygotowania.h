#ifndef SPOSOBPRZYGOTOWANIA_H
#define SPOSOBPRZYGOTOWANIA_H
#include <QStringList>

class SposobPrzygotowania :public QStringList
{
public:
    SposobPrzygotowania() {}
private:
    QString opisSposobuPrzygotowania;
    double czasPrzygotowania;
    SposobPrzygotowania(const SposobPrzygotowania&);
    SposobPrzygotowania& operator=(const SposobPrzygotowania&);
    bool addOpisSposobuPrzygotowywania(QString m_opisSposobuPrzygotowania);
    bool addCzasPrzygotowania(double m_czasPrzygotowania);
    bool addCzynnoscPotrzebnaDoWykonania(QString m_Czynnosc);
};

#endif // SPOSOBPRZYGOTOWANIA_H


