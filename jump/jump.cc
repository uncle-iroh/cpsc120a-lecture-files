#include <iostream>

int main() {
    int x = 10;

    if (!(x > 5))
        goto else_block;

    std::cout << "x is greater than 5\n";
    goto end_if;

else_block:
    std::cout << "x is 5 or less\n";

end_if:
    std::cout << "Done\n";
    return 0;
}

