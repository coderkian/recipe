#ifndef MASKFACTORY_HPP
#define MASKFACTORY_HPP

#include "mask.hpp"

class FigureFactory {
 public:
  virtual ~FigureFactory()=0;
  virtual MaskFigure* CreateFigure()=0;
 protected:
  FigureFactory();
};

class RoundFactory:public FigureFactory {
 public:
  RoundFactory();
  ~RoundFactory();
  MaskRound* CreateFigure();
};

class RecFactory:public FigureFactory {
 public:
  RecFactory();
  ~RecFactory();
  MaskRec* CreateFigure();
};

class TriFactory:public FigureFactory {
 public:
  TriFactory();
  ~TriFactory();
  MaskTri* CreateFigure();
};

#endif
