#include <iostream>
#include "mask.hpp"

using std::cout;
using std::endl;

MaskFigure::MaskFigure() {

}

MaskFigure::~MaskFigure() {

}

MaskAFigure::MaskAFigure(){
  cout<<"init MaskAFigure "<<endl;
}

MaskAFigure::~MaskAFigure() {
  cout<<"delete MaskAFigure"<<endl;
}

void MaskAFigure::CreateRound(){
  cout<<"create MaskA Round"<<endl;
}

void MaskAFigure::CreateRec(){
  cout<<"create MaskA Rec"<<endl;
}

void MaskAFigure::CreateTri(){
  cout<<"create MaskA Tri"<<endl;
}

MaskBFigure::MaskBFigure(){
  cout<<"init MaskBFigure "<<endl;
}

MaskBFigure::~MaskBFigure() {
  cout<<"delete MaskBFigure"<<endl;
}

void MaskBFigure::CreateRound(){
  cout<<"create MaskB Round"<<endl;
}

void MaskBFigure::CreateRec(){
  cout<<"create MaskB Rec"<<endl;
}

void MaskBFigure::CreateTri(){
  cout<<"create MaskB Tri"<<endl;
}
