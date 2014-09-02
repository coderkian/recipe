#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton{
  public:
    static Singleton* getInstance();
  private:
    static Singleton* instance;
};
#endif
