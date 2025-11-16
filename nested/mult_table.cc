#include <iostream>

int main() {
  const int ROWS = 5;
  const int COLS = 5;

  for (int r = 1; r <= ROWS; ++r) {
    for (int c = 1; c <= COLS; ++c) {
      std::cout << r * c << "\t";
    }
    std::cout << "\n";
  }

  return 0;
}

