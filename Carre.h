#include "Rectangle.h"

class Carre : public Rectangle {
private:
  float c;

public:
  Carre(Point _p, float _c);
  Carre(const Carre &_c);
  float getC() const;
  void setC(float _c);
  virtual float perimetre();
  virtual float surface();
};

ostream &operator<<(ostream &s, Carre const &_carre);