#include <string>
#include "builder.hpp"

MaskBuilder::MaskBuilder(string &filename, MaskFigure *_mf):inf(), mf(_mf) {
  openFile(filename);
}

MaskBuilder::~MaskBuilder(){
  inf.close();
}

bool MaskBuilder::openFile(string& filename){
  if(inf.is_open()){
    inf.close();
    inf.clear(std::ios_base::goodbit);
  }

  inf.open(filename);
  if(!inf){
    cout<<"open file \""<<filename<<"\" failure"<<endl;
    return false;
  }
  return true;
}

void MaskBuilder::setMaskFigure(MaskFigure* _mf) {
  mf = _mf;
}

void MaskBuilder::BuildMask(){
  string ftype;
  while(inf>>ftype){
    if(ftype == "round"){
      mf->CreateRound();
    }else if(ftype == "rec"){
      mf->CreateRec();
    }else if(ftype == "tri"){
      mf->CreateTri();
    }else {
      cout<<"undefine figure type: "<<ftype<<endl;
    }
  }
}
