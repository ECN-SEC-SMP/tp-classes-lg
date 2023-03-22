#include "Point.h"

int main() {
  // Instanciation avec 2 constructeurs différents
  Point point1(14.0, 10.0);
  Point point1bis(point1);

  // Affiche les coordonnées des 2 points
  point1.affiche();
  point1bis.affiche();

  point1bis.setX(3.0);
  point1bis.setY(7.0);
  point1bis.affiche();

  point1bis.translater(point1);
  point1bis.affiche();
}