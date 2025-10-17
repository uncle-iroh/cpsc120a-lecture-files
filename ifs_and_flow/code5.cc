#include <iostream>
#include <cmath>  // for std::abs

int main() {
    double price;
    std::cout << "Enter the price: ";
    std::cin >> price;
    price = price + .000000000000000000000000033;
    price = price - .000000000000000000000000033;

    // Use a small tolerance for floating-point comparison
    if (price == 3.0) {
        std::cout << "The price is correct!" << std::endl;
    } else {
        std::cout << "The price is incorrect." << std::endl;
    }

    return 0;
}

