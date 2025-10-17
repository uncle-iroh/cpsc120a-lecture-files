#include <iostream>
#include <string>
#include "addPhrase.h"

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    // Function call
    std::string result = addPhrase(name);

    std::cout << result << std::endl;

    return 0;
}
