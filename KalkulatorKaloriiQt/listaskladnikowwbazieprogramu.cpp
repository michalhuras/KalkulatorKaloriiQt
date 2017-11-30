#include "listaskladnikowwbazieprogramu.h"

ListaSkladnikowWBazieProgramu::~ListaSkladnikowWBazieProgramu()
{
    qDeleteAll(*this);
    clear();
}
