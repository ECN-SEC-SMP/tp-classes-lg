#include "Cercle.h"
#define pi 3.14

Cercle::Cercle(Point _p, float _r) : Forme(_p){
  r=_r;
}

float Cercle::getR() const{
  return r;
}

void Cercle::setR(float _r){
  r=_r;
}

float Cercle::perimetre(){
  return 2*pi*r;
}

float Cercle::surface(){
  return pi*r*r;
}

ostream &operator<<(ostream &s, Cercle const &_cercle) {
  s << "Cercle : rayon : " << _cercle.getR();
  return s;
}