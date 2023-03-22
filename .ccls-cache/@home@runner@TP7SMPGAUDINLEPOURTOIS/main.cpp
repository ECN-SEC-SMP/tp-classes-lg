#include "Point.h"

int main() {
  // Instanciation avec 2 constructeurs différents
  Point point1(14.0, 10.0);
  Point point2(4.0,6.0);

  // Affiche les coordonnées des 2 points
  cout<<point1<<endl;
  cout<<point2<<endl;

  point1+=point2;
  cout<<point1<<endl;
}
