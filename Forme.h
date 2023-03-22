#include "Point.h"

class Forme {
  private:
    Point p;    

  public:
    Forme();
    Forme(float _x, float _y);
    Forme(Point _p);
    void operator+=(Point const& _p);
    virtual float perimetre()=0;
    virtual float surface()=0;
};

ostream &operator<<(ostream &s, Forme const &_forme);