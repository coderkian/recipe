#include <iostream>
#include "builder.hpp"

using std::cout;
using std::endl;

int main() {
  string filename("types");
  MaskAFigure maf;
  MaskBuilder mb(filename,&maf);
  mb.BuildMask();
  MaskBFigure mbf;
  mb.setMaskFigure(&mbf);
  string filename2("types2");
  mb.openFile(filename2);
  mb.BuildMask();
}
