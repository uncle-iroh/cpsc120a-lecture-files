#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 2) {
        std::cout << "You are a baby." << std::endl;
    } else if (age <= 12) {
        std::cout << "You are a kid." << std::endl;
    } else if (age <= 25) {
        std::cout << "You are young." << std::endl;
    } else {
        std::cout << "You are old." << std::endl;
    }

    return 0;
}
