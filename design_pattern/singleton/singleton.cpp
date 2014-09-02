#include "singleton.hpp"

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance(){
  if(nullptr == instance){
    instance = new Singleton();
  }
  return instance;
}
