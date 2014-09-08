#ifndef ADAPTEE_HPP
#define ADAPTEE_HPP

#include <iostream>

class Adaptee{
  public:
    void SpecialRequest() const{
      std::cout<<"Adaptee SpecialRequeset"<<std::endl;
    }
};

class Target{
  public:
    virtual void Request() const=0;
};

#if 0
class Adapter:public Target, private Adaptee{
  public:
    void Request() const{
      Adaptee::SpecialRequest();
    }
};
#else
class Adapter:public Target{
  public:
    Adapter(Adaptee *_adp){
      adaptee = _adp;
    }
    void Request() const{
      adaptee->SpecialRequest();
    }
  private:
    Adaptee *adaptee;
};
#endif

#endif
