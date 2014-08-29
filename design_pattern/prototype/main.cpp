#include <iostream>
#include "maskdesigner.hpp"

using std::cout;
using std::endl;

int main() {
  MaskRound mro;
  MaskRec   mre;
  MaskTri   mtr;
  FigureDesigner  md1(&mro);
  MaskFigure*   mf1 = md1.MakeFigure();
  FigureDesigner  md2(&mre);
  MaskFigure*   mf2 = md2.MakeFigure();
  FigureDesigner  md3(&mtr);
  MaskFigure*   mf3 = md3.MakeFigure();

  delete mf1;
  delete mf2;
  delete mf3;
}
