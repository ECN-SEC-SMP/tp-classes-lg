#include "Rectangle.h"

class Carre : public Rectangle {
private:
  float c;

public:
  Carre(Point _p, float _c);
  Carre(Carre const &_c);
  float getC() const;
  void setC(float _c);
};

ostream &operator<<(ostream &s, Carre const &_carre);