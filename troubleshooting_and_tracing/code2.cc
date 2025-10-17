#include <iostream>
#include <string>

// Function that adds the phrase in front of a name
std::string addPhrase(const std::string& name) {
    return "It's dangerous to go alone " + name + ". Take this!";
}

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    // Function call
    std::string result = addPhrase(name);

    std::cout << result << std::endl;

    return 0;
}
