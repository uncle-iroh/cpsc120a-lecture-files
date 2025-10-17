#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 16) {
        std::cout << "You are old enough to drive!" << std::endl;
    } 
    if (std::cin) {
        std::cout << "cin is in a good state" << std::endl;
    } else {
        std::cout << "cin is in a bad state" << std::endl;
    }

    return 0;
}

