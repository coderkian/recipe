#include <iostream>
#include "maskA.hpp"

using std::cout;
using std::endl;

MaskAFigure::MaskAFigure() {

}

MaskAFigure::~MaskAFigure() {

}

MaskARound::MaskARound() {
  cout<<"Draw roundness on MaskA"<<endl;
}

MaskARound::~MaskARound() {

}

MaskARec::MaskARec() {
  cout<<"Draw rectangle on MaskA"<<endl;
}

MaskARec::~MaskARec() {

}

MaskATri::MaskATri() {
  cout<<"Draw triangle on MaskA"<<endl;
}

MaskATri::~MaskATri() {

}
