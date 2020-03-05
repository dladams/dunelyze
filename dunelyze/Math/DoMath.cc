#include "dunelyze/Math/DoMath.h"

namespace dunelyze {

double DoMath::calculate(double y)
{
    return (y*y)*itsval;
}

double DoMath::val() const
{
    return itsval;
}

void DoMath::setval(double x)
{
    itsval = x;
}

}
