#include "Rectangle.h"

Rectangle::Rectangle(Point _p, float _lx, float _ly) : Forme(_p) {
  lx = _lx;
  ly = _ly;
}

Rectangle::Rectangle(Rectangle const &_r) : lx(_r.lx), ly(_r.ly) {
  cout << "copie du Rectangle" << endl;
}

float Rectangle::getLx() const { return lx; }

float Rectangle::getLy() const { return ly; }

void Rectangle::setLx(float _lx) { lx = _lx; }

void Rectangle::setLy(float _ly) { ly = _ly; }