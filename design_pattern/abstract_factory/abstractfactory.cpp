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

MaskBRec* RecFactory::CreateFigureB() {
  return new MaskBRec();
}

TriFactory::TriFactory() {
  cout<<"Init TriFactory"<<endl;
}

TriFactory::~TriFactory() {

}

MaskBTri* TriFactory::CreateFigureB() {
  return new MaskBTri();
}

