#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <atomic>
#include <mutex>

class Singleton{
  public:
    static Singleton* getInstance();
  private:
    static std::atomic<Singleton*> instance;
    static std::mutex m_mutex;
};
#endif
