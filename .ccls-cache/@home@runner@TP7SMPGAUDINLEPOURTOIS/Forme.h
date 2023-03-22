#include "Point.h"

class Forme : public Point {
  private:
    Point p;    

  public:
    Forme(const Point _p);
    void operator+=(Forme const& _f);
    virtual float perimetre()=0;
    virtual float surface()=0;
};

ostream &operator<<(ostream &s, Forme const &_forme);