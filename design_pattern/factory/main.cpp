#include <iostream>
#include "factory.hpp"


int main() {
  RoundFactory *rf = new RoundFactory();
  MaskFigure *mf1 = rf->CreateFigure();

  RecFactory *ref = new RecFactory();
  MaskFigure *mf2 = ref->CreateFigure();

  TriFactory *tf = new TriFactory();
  MaskFigure *mf3 = tf->CreateFigure();

  delete mf1;
  delete mf2;
  delete mf3;
  delete rf;
  delete ref;
  delete tf;
  return 0;
}
