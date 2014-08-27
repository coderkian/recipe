#include <iostream>
#include "factory.hpp"

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

MaskFigure* RoundFactory::CreateFigure() {
  return new MaskRound();
}

RecFactory::RecFactory() {
  cout<<"Init RecFactory"<<endl;
}

RecFactory::~RecFactory() {

}

MaskFigure* RecFactory::CreateFigure() {
  return new MaskRec();
}

TriFactory::TriFactory() {
  cout<<"Init TriFactory"<<endl;
}

TriFactory::~TriFactory() {

}

MaskFigure* TriFactory::CreateFigure() {
  return new MaskTri();
}

