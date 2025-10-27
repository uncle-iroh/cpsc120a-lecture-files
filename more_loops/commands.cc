#include <iostream>
#include <vector>
#include <string>

int main(int argc, char ** argv) {
  std::vector<std::string> command{argv, argv + argc};
  for (std::string s : command) {
    std::cout << s << "\n";
  }
  return 0;
}
