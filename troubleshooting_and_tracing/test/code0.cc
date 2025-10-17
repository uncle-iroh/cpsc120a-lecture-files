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
    double circleArea = calcCircleArea(radius);     // πr²
    double squareArea = side * side;                // side²
    double triangleArea = base * height;      // ½ × base × height

    // Total area
    double totalArea = circleArea + squareArea + triangleArea;

    // Print results
    std::cout << "\n\nTotal area of all shapes: " << totalArea << std::endl;

    return 0;
}
