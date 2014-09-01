#include <iostream>
#include <memory>
#include "abstractfactory.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;


int main() {
  shared_ptr<RoundFactory> rof(new RoundFactory());
  shared_ptr<MaskARound>    maro(rof->CreateFigureA());
  shared_ptr<MaskBRound>    mbro(rof->CreateFigureB());

  shared_ptr<RecFactory> ref(new RecFactory());
  shared_ptr<MaskARec>    mare(ref->CreateFigureA());
  shared_ptr<MaskBRec>    mbre(ref->CreateFigureB());

  shared_ptr<TriFactory> tif(new TriFactory());
  shared_ptr<MaskATri>    matr(tif->CreateFigureA());
  shared_ptr<MaskBTri>    mbtr(tif->CreateFigureB());
}
