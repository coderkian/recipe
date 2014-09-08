#include "adapter.hpp"

int main() {
#if 0
  Adapter apr;
  apr.Request();
#else 
  Adaptee adp;
  Adapter apr(&adp);
  apr.Request();
#endif
}
