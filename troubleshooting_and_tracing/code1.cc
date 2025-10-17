#include <iostream>
#include <cmath>   // for M_PI and pow()

int main() {
    double radius, side, base, height;

    // Get inputs from user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Calculate areas
    //double circleArea = M_PI * radius * radius;     // πr²
    double circleArea = M_PI * pow(radius, 2);     // πr²
    //double squareArea = side * side;                // side²
    double squareArea =  pow(side,2);                // side²
    double triangleArea = .5 * base * height;      // ½ × base × height

    // Total area
    double totalArea = circleArea + squareArea + triangleArea;

    // Print results
    std::cout << "\nArea of circle: " << circleArea;
    std::cout << "\nArea of square: " << squareArea;
    std::cout << "\nArea of triangle: " << triangleArea;
    std::cout << "\n\nTotal area of all shapes: " << totalArea << std::endl;

    return 0;
}
