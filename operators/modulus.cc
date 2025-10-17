#include <iostream>

int main() {
    int a = 5;
    int b = 2;
    double c = 5.0;
    double d = 2.0;

    std::cout << "Integer division (5 / 2): " << a / b << std::endl;
    std::cout << "Modulus (5 % 2): " << a % b << std::endl;
    std::cout << "Double division (5.0 / 2.0): " << c / d << std::endl;
    std::cout << "Mixed division (5 / 2.0): " << a / d << std::endl;
    std::cout << "Cast to double (5 / 2): " << static_cast<double>(a) / b << std::endl;

    return 0;
}

