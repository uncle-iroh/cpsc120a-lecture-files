#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> toppings;

    std::string t1;

    std::cout << "Enter your first favorite topping: ";
    std::getline(std::cin, t1);
    toppings.push_back(t1);

    std::cout << "Enter your second favorite topping: ";
    std::getline(std::cin, t1);
    toppings.push_back(t1);

    std::cout << "Enter your third favorite topping: ";
    std::getline(std::cin, t1);
    toppings.push_back(t1);

    std::cout << "Your pizza with " 
              << toppings[0] << ", " 
              << toppings[1] << ", and " 
              << toppings[2] << " is ready!\n";

    return 0;
}

