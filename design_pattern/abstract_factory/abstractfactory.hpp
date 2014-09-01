#ifndef ABSTRACT_MASKFACTORY_HPP
#define ABSTRACT_MASKFACTORY_HPP

#include "maskB.hpp"
#include "maskA.hpp"

class FigureFactory {
 public:
  virtual ~FigureFactory()=0;
  virtual MaskAFigure* CreateFigureA()=0;
  virtual MaskBFigure* CreateFigureB()=0;
 protected:
  FigureFactory();
};

class RoundFactory:public FigureFactory {
 public:
  RoundFactory();
  ~RoundFactory();
  MaskARound* CreateFigureA();
  MaskBRound* CreateFigureB();
};

class RecFactory:public FigureFactory {
 public:
  RecFactory();
  ~RecFactory();
  MaskARec* CreateFigureA();
  MaskBRec* CreateFigureB();
};

class TriFactory:public FigureFactory {
 public:
  TriFactory();
  ~TriFactory();
  MaskATri* CreateFigureA();
  MaskBTri* CreateFigureB();
};

#endif
