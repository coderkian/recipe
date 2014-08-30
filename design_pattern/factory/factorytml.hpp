#ifndef FACTORYTML_HPP
#define FACTORYTML_HPP

#include <iostream>

using std::cout;
using std::endl;

class FigureFactoryTml {
 public:
  FigureFactoryTml(){ cout<<"Init FigureFactoryTml"<<endl; }
  ~FigureFactoryTml(){ }

  template<typename T>
  T* CreateFigure() {
    return new T();
  }
};

#endif
