#include <iostream>
#include "factory.hpp"
#include "factorytml.hpp"


int main() {
  RoundFactory *rf = new RoundFactory();
  MaskFigure *mf1 = rf->CreateFigure();

  RecFactory *ref = new RecFactory();
  MaskFigure *mf2 = ref->CreateFigure();

  TriFactory *tf = new TriFactory();
  MaskFigure *mf3 = tf->CreateFigure();

  FigureFactoryTml *fft = new FigureFactoryTml();
  MaskFigure *mf4= fft->CreateFigure<MaskRound>();
  MaskFigure *mf5= fft->CreateFigure<MaskRec>();
  MaskFigure *mf6= fft->CreateFigure<MaskTri>();

  delete mf1;
  delete mf2;
  delete mf3;
  delete mf4;
  delete mf5;
  delete mf6;
  delete rf;
  delete ref;
  delete tf;
  delete fft;
  return 0;
}
