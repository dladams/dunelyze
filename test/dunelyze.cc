#include <iostream>
#include <assert.h>
#include "dunelyze/Math/DoMath.h"

int main()
{
  dunelyze::DoMath mth;

  double x,y;
  x = 4.;
  y = x;
  assert( mth.calculate(x) == 16. );

  y = 5.;
  mth.setval(y);
  assert( mth.calculate(x) == 80. );

  return 0;
}

