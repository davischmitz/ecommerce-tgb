#ifndef FREIGHTFACTORY_H
#define FREIGHTFACTORY_H

#include "freight.h"
#include "traditionalfreight.h"
#include "expressfreight.h"
#include <QString>

class FreightFactory  //padrão factory
{
public:
    Freight *createFreight(QString);
};

#endif // FREIGHTFACTORY_H
