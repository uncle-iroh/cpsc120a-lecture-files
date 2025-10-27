#include <iostream>

int main() {
    int x = 0;

    while (x < 10) {
        std::cout << "x = " << x << '\n';
        x++;

        if (x == 5) {
            std::cout << "Breaking out of the loop!\n";
            break;  // Exit the while loop early
        }
    }

    std::cout << "Loop finished.\n";
    return 0;
}

