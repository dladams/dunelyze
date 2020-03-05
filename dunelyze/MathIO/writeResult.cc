#include <iostream>
#include "dunelyze/MathIO/writeResult.h"

namespace dunelyze {

std::ostream&  writeResult(double x, double y, std::ostream & os )
{
    os << "math on " << x << " results in " << y << std::endl;
    return os;
}

}

