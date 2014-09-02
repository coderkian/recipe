#include <iostream>
#include "singleton.hpp"

using std::cout;
using std::endl;

int main(){
  Singleton* st1 = Singleton::getInstance();
  Singleton* st2 = Singleton::getInstance();
  cout<<st1<<" "<<st2<<endl;
}
