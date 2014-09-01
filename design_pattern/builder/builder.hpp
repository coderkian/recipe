#ifndef BUILDER_HPP
#define BUILDER_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include "mask.hpp"

using std::vector;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

class MaskBuilder {
 public:
   MaskBuilder(string &, MaskFigure*);
   ~MaskBuilder();
   bool openFile(string &);
   void BuildMask();
   void setMaskFigure(MaskFigure*);
 private:
   ifstream inf;
   MaskFigure *mf;
};

#endif
