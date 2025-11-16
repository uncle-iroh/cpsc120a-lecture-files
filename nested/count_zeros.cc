#include <iostream>
#include <vector>

int main() {
  std::vector<std::vector<int>> matrix = {
      {1, 0, 3},
      {0, 5, 6},
      {7, 8, 0}
  };

  int zero_count = 0;

  for (const std::vector<int>& row : matrix) {
    for (int value : row) {
      if (value == 0) {
        ++zero_count;
      }
    }
  }

  std::cout << "Zeros: " << zero_count << "\n";
  return 0;
}
