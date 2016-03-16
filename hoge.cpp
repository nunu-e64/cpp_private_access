#include <iostream>
#include "hoge.h"

struct B {
public:
  int a;
  float b;
};


int main() {
  A _a = A(1, 0.2f);
  B* _b = (B*)&_a;
  // _b->a;  ok
  // _a.a;   ng
  std::cout << "_b->a: " << _b->a << ", _b->b: " << _b->b;
  return 0;
}
