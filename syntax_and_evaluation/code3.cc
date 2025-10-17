#include <iostream>

int main() {
    double length, width;

    // Ask user for rectangle dimensions
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Compute area of rectangle
    double rectangleArea = length * width;

    // Each triangle formed by cutting rectangle along a diagonal
    double triangleArea = rectangleArea / 2.0;

    // Display results
    std::cout << "\nThe area of the rectangle is: " << rectangleArea << std::endl;
    std::cout << "The area of each of the two triangles is: " << triangleArea << std::endl;

    return 0;
}
