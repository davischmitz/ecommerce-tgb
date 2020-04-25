#include "freightfactory.h"


Freight *FreightFactory::createFreight(QString type)
{
    if(type == "E"){
        return new ExpressFreight();
    }
    return new TraditionalFreight();
}
