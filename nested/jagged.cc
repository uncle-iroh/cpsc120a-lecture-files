#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
  std::srand(std::time(nullptr));  // Seed the RNG

  int rows = 0;
  std::cout << "Enter number of rows: ";
  std::cin >> rows;

  // Declare a jagged 2D vector.
  std::vector<std::vector<int>> grid(rows);

  // Let the user choose the number of columns for each row.
  for (int r = 0; r < rows; ++r) {
    int cols = 0;
    std::cout << "Enter number of columns for row " << r << ": ";
    std::cin >> cols;

    grid[r] = std::vector<int>(cols);
  }

  // Fill with random numbers (0–99).
  for (int r = 0; r < grid.size(); ++r) {
    for (int c = 0; c < grid[r].size(); ++c) {
      grid[r][c] = std::rand() % 100;
    }
  }

  // Print the jagged vector.
  std::cout << "\nGenerated jagged 2D vector:\n";
  for (int r = 0; r < grid.size(); ++r) {
    for (int c = 0; c < grid[r].size(); ++c) {
      std::cout << grid[r][c] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}

