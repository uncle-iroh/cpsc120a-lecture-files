#include <iostream>

int main() {
    int x = 0;

    while (x < 10) {
        x++;

        if (x % 2 == 0) {
            continue;  // Skip even numbers
        }

        std::cout << "Odd number: " << x << '\n';
    }

    std::cout << "Loop finished.\n";
    return 0;
}

