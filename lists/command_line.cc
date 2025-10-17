#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
    // Populate vector with command-line arguments
    std::vector<std::string> command{argv, argv + argc};

    if (command.size() != 3) {
        std::cout << "Warning: Please provide exactly 2 arguments.\n";
    } else {
        try {
            // command[0] is program name, so args start at index 1
            std::cout << "First argument: " << command.at(1) << "\n";
            std::cout << "Second argument: " << command.at(2) << "\n";
        } 
        catch (const std::out_of_range& e) {
            std::cout << "Error accessing arguments: " << e.what() << "\n";
        }
    }

    return 0;
}

