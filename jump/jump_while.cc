#include <iostream>

int main() {
    int x = 0;

loop_start:
    if (!(x < 5))
        goto loop_end;

    std::cout << "x = " << x << '\n';
    x++;

    goto loop_start;

loop_end:
    std::cout << "Loop done\n";
    return 0;
}

