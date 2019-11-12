#include <iostream>
#include <memory>
// #include <llvm/Support/FormatVariadic.h>

/* g++ cpp-nontrival-init.cc -L/usr/lib/llvm-6.0/lib -lLLVM */

class A {
  static int count;
  std::unique_ptr<int> m;

public:
  A() : m(new int(count)) { std::cout << "construct " << count++ << "th A\n"; }

  ~A() { std::cout << "destruct " << --count << "th A\n"; }
} a, b, c;

int A::count = 0;

int main() {
  printf("%p, %p, %p\n", &a, &b, &c);
  std::clog << "I'm main" << std::endl;
  return 0;
}
