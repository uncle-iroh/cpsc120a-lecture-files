#include <iostream>
#include <vector>

void PrintMenu() {
  std::cout << "\nMenu:\n"
            << "1. Push value\n"
            << "2. Pop value\n"
            << "3. Show vector\n"
            << "4. Exit\n"
            << "Enter choice: ";
}

void PrintVector(const std::vector<int>& numbers) {
  std::cout << "Current vector: ";
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << "\n";
}

int main() {
  std::vector<int> numbers;
  int choice = 0;
  int value = 0;

  while (true) {
    PrintMenu();
    std::cin >> choice;

    switch (choice) {
      case 1:
        std::cout << "Enter value to push: ";
        std::cin >> value;
        numbers.push_back(value);
        std::cout << value << " added to vector.\n";
        break;

      case 2:
        if (!numbers.empty()) {
          std::cout << numbers.back() << " removed from vector.\n";
          numbers.pop_back();
        } else {
          std::cout << "Vector is empty, nothing to pop.\n";
        }
        break;

      case 3:
        PrintVector(numbers);
        break;

      case 4:
        std::cout << "Exiting program.\n";
        return 0;

      default:
        std::cout << "Invalid choice.\n";
        break;
    }
  }
}

