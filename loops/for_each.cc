#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> ingredients;
    std::string item;

    std::cout << "Enter pizza ingredients (type 'done' to finish):\n";

    do {
        std::cout << "Ingredient: ";
        std::getline(std::cin, item);

        if (item != "done") {
            ingredients.push_back(item);
        }

    } while (item != "done");

    std::cout << "\nYour pizza will have: ";
    for (const std::string& ing : ingredients) {
        std::cout << ing << " ";
    }
    std::cout << "\n";

    return 0;
}

