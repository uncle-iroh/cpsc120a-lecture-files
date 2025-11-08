#include <iostream>
#include <vector>

void PrintMenu() {
  std::cout << "\nMenu:\n"
            << "1. Enqueue value\n"
            << "2. Dequeue value\n"
            << "3. Show queue\n"
            << "4. Exit\n"
            << "Enter choice: ";
}

void PrintQueue(const std::vector<int>& queue) {
  std::cout << "Current queue: ";
  if (queue.empty()) {
    std::cout << "(empty)\n";
    return;
  }
  for (int value : queue) {
    std::cout << value << " ";
  }
  std::cout << "\n";
}

int main() {
  std::vector<int> queue;
  int choice = 0;
  int value = 0;

  while (true) {
    PrintMenu();
    std::cin >> choice;

    switch (choice) {
      case 1:  // Enqueue
        std::cout << "Enter value to enqueue: ";
        std::cin >> value;
        queue.push_back(value);
        std::cout << value << " added to queue.\n";
        break;

      case 2:  // Dequeue
        if (!queue.empty()) {
          std::cout << queue.front() << " removed from queue.\n";
          queue.erase(queue.begin());  // Remove the front element
        } else {
          std::cout << "Queue is empty, nothing to dequeue.\n";
        }
        break;

      case 3:  // Display
        PrintQueue(queue);
        break;

      case 4:  // Exit
        std::cout << "Exiting program.\n";
        return 0;

      default:
        std::cout << "Invalid choice.\n";
        break;
    }
  }
}

