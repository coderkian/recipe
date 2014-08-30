#include <iostream>
#include <memory>
#include "abstractfactory.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;


int main() {
  shared_ptr<RoundFactory> rof(new RoundFactory());
  shread_ptr<MaskARound> maro(rof->CreateFigureA());
}
