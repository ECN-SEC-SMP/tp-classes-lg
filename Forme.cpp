#include "Forme.h"

Forme::Forme(const Point _p) : Point() {
  p = _p;
}

ostream &operator<<(ostream &s, Forme const &_f) {
  s << _f.getX() << " ; " << _f.getY();
  return s;
}

void Forme::operator+=(Forme const& _f){
  this->p.setX(p.getX() + _f.getX());
  this->p.setY(p.getY() + _f.getY());
}