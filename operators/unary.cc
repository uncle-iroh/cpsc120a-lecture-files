#include <iostream>

int main() {
  int x{5};
  std::cout << "x is " << x << std::endl;
  std::cout << "Now x is " << x << std::endl;
  std::cout << "x++ is " << x++ << std::endl;
  std::cout << "Now x is " << x << std::endl;
  std::cout << "++x is " << ++x << std::endl;
  std::cout << "Now x is " << x << std::endl;
  std::cout << "x-- is " << x-- << std::endl;
  std::cout << "Now x is " << x << std::endl;
  std::cout << "--x is " << --x << std::endl;
  std::cout << "Now x is " << x << std::endl;
  return 0;
}
