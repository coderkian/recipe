#include "singleton.hpp"


std::atomic<Singleton*> Singleton::instance;
std::mutex Singleton::m_mutex;

Singleton* Singleton::getInstance(){
  Singleton* tmp = instance.load(std::memory_order_relaxed);
  std::atomic_thread_fence(std::memory_order_acquire);
  if(nullptr == tmp){
    std::lock_guard<std::mutex> lock(m_mutex);
    tmp = instance.load(std::memory_order_relaxed);
    if(nullptr == tmp){
      tmp = new Singleton();
      std::atomic_thread_fence(std::memory_order_release);
      instance.store(tmp, std::memory_order_relaxed);
    }
  }
  return instance;
}
