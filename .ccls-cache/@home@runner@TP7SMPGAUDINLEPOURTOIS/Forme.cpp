#include "Forme.h"

Forme::Forme() { p = Point(); }

Forme::Forme(float _x, float _y) { p = Point(_x, _y); }

Forme::Forme(Point _p) { p = _p; }

Forme::Forme(Forme const &_f) : p(_f.p) { cout << "copie d'une Forme" << endl; }

void Forme::operator+=(Point const &_p) { p += _p; }

