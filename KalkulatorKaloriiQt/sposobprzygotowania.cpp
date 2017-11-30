#include "sposobprzygotowania.h"

SposobPrzygotowania& SposobPrzygotowania::operator=(const SposobPrzygotowania&)
{
    return *this;
}


SposobPrzygotowania::SposobPrzygotowania(const SposobPrzygotowania&)
    : QStringList() {}


bool SposobPrzygotowania::addOpisSposobuPrzygotowywania(QString m_opisSposobuPrzygotowania)
{
    opisSposobuPrzygotowania=m_opisSposobuPrzygotowania;
    if (opisSposobuPrzygotowania==m_opisSposobuPrzygotowania)return true;
    return false;
}

bool SposobPrzygotowania::addCzasPrzygotowania(double m_czasPrzygotowania)
{
   czasPrzygotowania=m_czasPrzygotowania;
   if (czasPrzygotowania==m_czasPrzygotowania)return true;
   return false;
}

bool SposobPrzygotowania::addCzynnoscPotrzebnaDoWykonania(QString m_Czynnosc)
{
    this->append(m_Czynnosc);
    if (this->at(this->size())==m_Czynnosc) return true;
    return false;
}



