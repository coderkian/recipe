#ifndef FIGUREDESIGNER_HPP
#define FIGUREDESIGNER_HPP

#include "mask.hpp"

class FigureDesigner{
 public:
  FigureDesigner(MaskFigure *mf){
    figure = mf;
  }

  MaskFigure* MakeFigure(){
    return figure->clone();
  }

 private:
  MaskFigure *figure;
};

#endif
