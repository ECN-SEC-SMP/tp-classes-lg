#include "Forme.h"

class Rectangle : public Forme {
private:
  float lx;
  float ly;

public:
  Rectangle(Point _p, float _lx, float _ly);
  Rectangle(const Rectangle &_r);
  float getLx() const;
  float getLy() const;
  void setLx(float _lx);
  void setLy(float _ly);
};

ostream &operator<<(ostream &s, Rectangle const &_rect);