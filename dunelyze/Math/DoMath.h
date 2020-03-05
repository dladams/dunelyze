// This is serious overkill for the sake of an example

namespace dunelyze {

class DoMath {
  public:
  DoMath(double x=1.)
  : itsval(x) {}
  ~DoMath() {}
  double val() const;
  double calculate(double);
  void setval(double);
  private:
  double itsval;
};

}

