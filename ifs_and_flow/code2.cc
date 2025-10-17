#include <iostream>

int main(int argc, char* argv[]) {
 int x{0};
 std::cout << "Enter a number: ";
 std::cin >> x;
 std::cout << x << " counts as ";
 if (x) {
   std::cout << "true\n";
 } else {
   std::cout << "false\n";
 }

 return 0;
}

