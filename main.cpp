#include "Point.h"

int main() {
  // Instanciation avec 2 constructeurs différents
  Point point0;
  Point point1(14.0, 10.0);

  // Affiche les coordonnées des 2 points
  point0.affiche();
  point1.affiche();

  // Translate et Affiche le point 1
  point1.translater(1.0, 1.0);
  point1.affiche();

  // Translate et Affiche le point 0
  point0.translater(10.0, 10.0);
  point0.affiche();
}