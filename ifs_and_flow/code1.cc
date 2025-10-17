#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 16) {
        std::cout << "You are old enough to drive!" << std::endl;
    } else {
        std::cout << "You are not old enough to drive." << std::endl;
    }

    return 0;
}

