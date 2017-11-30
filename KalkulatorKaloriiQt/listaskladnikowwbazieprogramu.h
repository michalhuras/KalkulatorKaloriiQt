#ifndef LISTASKLADNIKOWWBAZIEPROGRAMU_H
#define LISTASKLADNIKOWWBAZIEPROGRAMU_H
#include <QList>
#include <QString>
#include "skladnik.h"


class ListaSkladnikowWBazieProgramu: public QList<Skladnik*>
{
public:
    ListaSkladnikowWBazieProgramu(){}
    ~ListaSkladnikowWBazieProgramu();
    bool addSkladnik(Skladnik*& dodawanyskladnik);
    bool removeSkladnik(Skladnik*& dodawanyskladnik);
    QStringList toQStringList();
    QString toQString();
    bool isInListaSkladnikow(QString m_nazwaProduktu);
    QString getSkladnikQString(QString m_nazwaProduktu);
private:
    ListaSkladnikowWBazieProgramu(const ListaSkladnikowWBazieProgramu&);
    ListaSkladnikowWBazieProgramu& operator=(const ListaSkladnikowWBazieProgramu&);
    Skladnik* findRefItem(QString m_nazwaProduktu);
};

#endif // LISTASKLADNIKOWWBAZIEPROGRAMU_H

