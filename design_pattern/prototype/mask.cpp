#include <iostream>
#include "mask.hpp"

using std::cout;
using std::endl;

MaskFigure::MaskFigure() {
  cout<<"init MaskFigure"<<endl;
}

MaskFigure::MaskFigure(const MaskFigure& mf) {
  cout<<"copy Figure"<<endl;
}

MaskFigure::~MaskFigure() {
  cout<<"delete MaskFigure"<<endl;
}

MaskRound::MaskRound() {
  cout<<"Draw roundness on Mask"<<endl;
}

MaskRound::MaskRound(const MaskRound& mr) :MaskFigure(mr){
  cout<<"copy roundness"<<endl;
}

MaskRound* MaskRound::clone() {
  return new MaskRound(*this);
}

MaskRound::~MaskRound() {
  cout<<"delete MaskRound"<<endl;
}

MaskRec::MaskRec() {
  cout<<"Draw rectangle on Mask"<<endl;
}

MaskRec::MaskRec(const MaskRec& mr) :MaskFigure(mr){
  cout<<"copy rectangle"<<endl;
}

MaskRec* MaskRec::clone() {
  return new MaskRec(*this);
}

MaskRec::~MaskRec() {
  cout<<"delete MaskRec"<<endl;
}

MaskTri::MaskTri() {
  cout<<"Draw triangle on Mask"<<endl;
}

MaskTri::MaskTri(const MaskTri& mt) :MaskFigure(mt){
  cout<<"copy triangle"<<endl;
}

MaskTri* MaskTri::clone() {
  return new MaskTri(*this);
}

MaskTri::~MaskTri() {
  cout<<"delete MaskTri"<<endl;
}
