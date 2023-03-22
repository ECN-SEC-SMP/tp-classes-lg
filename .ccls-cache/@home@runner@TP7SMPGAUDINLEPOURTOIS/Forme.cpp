#include "Forme.h"

Forme::Forme() { p = Point(); }

Forme::Forme(float _x, float _y) { p = Point(_x, _y); }

Forme::Forme(Point _p) { p = _p; }

void Forme::operator+=(Point const& _p) {
  p += _p;
}

