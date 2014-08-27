#include <iostream>
#include "mask.hpp"

using std::cout;
using std::endl;

MaskFigure::MaskFigure() {

}

MaskFigure::~MaskFigure() {

}

MaskRound::MaskRound() {
  cout<<"Draw roundness on Mask"<<endl;
}

MaskRound::~MaskRound() {

}

MaskRec::MaskRec() {
  cout<<"Draw rectangle on Mask"<<endl;
}

MaskRec::~MaskRec() {

}

MaskTri::MaskTri() {
  cout<<"Draw triangle on Mask"<<endl;
}

MaskTri::~MaskTri() {

}
