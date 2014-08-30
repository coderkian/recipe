#include <memory>
#include <iostream>
#include "factory.hpp"
#include "factorytml.hpp"

using std::shared_ptr;


int main() {
  shared_ptr<RoundFactory> roundfac(new RoundFactory());
  shared_ptr<MaskRound>    mrd(roundfac->CreateFigure());

  shared_ptr<RecFactory> recfac(new RecFactory());
  shared_ptr<MaskRec>    mrc(recfac->CreateFigure());

  shared_ptr<TriFactory> trifac(new TriFactory());
  shared_ptr<MaskTri>    mti(trifac->CreateFigure());

  shared_ptr<FigureFactoryTml>  fft(new FigureFactoryTml());
  shared_ptr<MaskRound>         mrdp(fft->CreateFigure<MaskRound>());
  shared_ptr<MaskRec>           mrcp(fft->CreateFigure<MaskRec>());
  shared_ptr<MaskTri>           mtip(fft->CreateFigure<MaskTri>());

  return 0;
}
