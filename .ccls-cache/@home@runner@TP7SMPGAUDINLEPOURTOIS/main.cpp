#include "Rectangle.h"

int main() {
  // Instanciation avec 2 constructeurs différents
  Point point1(14.0, 10.0);
  Point point2(4.0, 6.0);

  // Affiche les coordonnées des 2 points
  cout << point1 << endl;
  cout << point2 << endl;

  point1 += point2;
  cout << point1 << endl;

  // Test Rectangle
  Rectangle rect1(point2, 5.0, 8.0);
  cout << rect1.getLx() << endl;
  cout << rect1.getLy() << endl;

  rect1.setLx(2.0);
  rect1.setLy(1.0);

  cout << rect1 << endl;

  cout << "Perimetre : " << rect1.perimetre() << endl;
  cout << "Aire : " << rect1.surface() << endl;
}
