#include <iostream>
#include "abstractfactory.hpp"

using std::cout;
using std::endl;

FigureFactory::FigureFactory() {

}

FigureFactory::~FigureFactory() {

}

RoundFactory::RoundFactory() {
  cout<<"Init RoundFactory"<<endl;
}

RoundFactory::~RoundFactory() {

}

MaskARound* RoundFactory::CreateFigureA() {
  return new MaskARound();
}

MaskBRound* RoundFactory::CreateFigureB() {
  return new MaskBRound();
}

RecFactory::RecFactory() {
  cout<<"Init RecFactory"<<endl;
}

RecFactory::~RecFactory() {

}

MaskARec* RecFactory::CreateFigureA() {
  return new MaskARec();
}

MaskBRec* RecFactory::CreateFigureB() {
  return new MaskBRec();
}

TriFactory::TriFactory() {
  cout<<"Init TriFactory"<<endl;
}

TriFactory::~TriFactory() {

}

MaskATri* TriFactory::CreateFigureA() {
  return new MaskATri();
}

MaskBTri* TriFactory::CreateFigureB() {
  return new MaskBTri();
}

