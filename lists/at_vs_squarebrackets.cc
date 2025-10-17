#include <iostream>
#include <vector>

int main() {
    // Populate vector manually (no loops)
    std::vector<int> nums = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

    int index;
    std::cout << "Enter an index (0–9): ";
    std::cin >> index;

    std::cout << "\nUsing []: ";
    std::cout << nums[index] << "\n";  // No bounds checking

    std::cout << "Using .at(): ";
    try {
        std::cout << nums.at(index) << "\n";  // Throws if out of range
    } 
    catch (const std::out_of_range& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    return 0;
}

