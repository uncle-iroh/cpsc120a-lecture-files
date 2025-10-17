#include <iostream>
#include <vector>

int main() {
    // ----- ARRAY -----
    int arr[3] = {10, 20, 30};
    std::cout << "Array elements:\n";
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";

    // Arrays have fixed size — we can change existing values, not resize
    arr[1] = 99;
    std::cout << "After modifying arr[1]: ";
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";

    // ----- VECTOR -----
    std::vector<int> vec = {10, 20, 30};
    std::cout << "\nVector elements:\n";
    std::cout << vec.at(0) << " " << vec.at(1) << " " << vec.at(2) << "\n";

    // Vectors can grow dynamically
    vec.push_back(40);
    std::cout << "After adding 40:\n";
    std::cout << vec.at(0) << " " << vec.at(1) << " " 
              << vec.at(2) << " " << vec.at(3) << "\n";

    // You can still access by index
    vec[1] = 99;
    std::cout << "After modifying vec[1]:\n";
    std::cout << vec[0] << " " << vec[1] << " " 
              << vec[2] << " " << vec[3] << "\n";

    return 0;
}

