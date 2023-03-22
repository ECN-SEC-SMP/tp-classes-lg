#include "Forme.h"

class Rectangle {
private:
  float lx;
  float ly;

public:
  Rectangle();
  Rectangle(float _lx, float _ly);
  Rectangle(const Rectangle &_r);
  float getLx() const;
  float getLy() const;
  void setLx(float _lx);
  void setLy(float _ly);
};

ostream &operator<<(ostream &s, Point const &_point);