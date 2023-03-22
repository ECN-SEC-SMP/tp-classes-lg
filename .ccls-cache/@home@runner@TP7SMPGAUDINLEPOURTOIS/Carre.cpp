#include "Carre.h"

Carre::Carre(Point _p, float _c) : Rectangle(_p,_c,_c){
  c=_c;
}

float Carre::getC() const{
  return c;
}

void Carre::setC(float _c){
  c=_c;
}

ostream &operator<<(ostream &s, Carre const &_carre) {
  s << "Carre : cote : " << _carre.getC();
  return s;
}