#include "Rectangle.h"

Rectangle::Rectangle(Point _p, float _lx, float _ly) : Forme(_p) {
  lx = _lx;
  ly = _ly;
}

float Rectangle::getLx() const { return lx; }

float Rectangle::getLy() const { return ly; }

void Rectangle::setLx(float _lx) { lx = _lx; }

void Rectangle::setLy(float _ly) { ly = _ly; }

float Rectangle::perimetre(){
  return 2*lx+2*ly;
}

float Rectangle::surface(){
  return lx*ly;
}

ostream &operator<<(ostream &s, Rectangle const &_rect) {
  s << "Rectangle : lx : " << _rect.getLx() << " ly : " << _rect.getLy();
  return s;
}