// This is serious overkill for the sake of an example

#include "dunelyze/Math/DoMath.h"
#include "dunelyze/MathIO/writeResult.h"

int main()
{
   dunelyze::DoMath dm(2.);
   double x = 5.;
   double y = dm.calculate(x);
   dunelyze::writeResult(x,y);
   return 0;
}

