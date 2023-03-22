#include "Forme.h"

class Cercle : public Forme {
private:
  float r;

public:
  Cercle(Point _p, float _r);
  Cercle(const Cercle &_c);
  float getR() const;
  void setR(float _r);
  virtual float perimetre();
  virtual float surface();
};

ostream &operator<<(ostream &s, Cercle const &_cercle);