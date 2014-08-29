#include <memory>
#include <iostream>
#include "maskdesigner.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;

int main() {
  MaskRound mro;
  MaskRec   mre;
  MaskTri   mtr;
  FigureDesigner  md1(&mro);
  shared_ptr<MaskFigure> mfptr1(md1.MakeFigure());
  FigureDesigner  md2(&mre);
  shared_ptr<MaskFigure> mfptr2(md2.MakeFigure());
  FigureDesigner  md3(&mtr);
  shared_ptr<MaskFigure> mfptr3(md3.MakeFigure());
}
