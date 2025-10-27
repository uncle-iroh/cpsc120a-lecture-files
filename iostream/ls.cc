#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    // Put command-line arguments into a vector
    std::vector<std::string> command(argv, argv + argc);

    // Default to current directory if no argument given
    std::string path = ".";
    if (command.size() == 2) {
        path = command[1];
    }

    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            std::cout << entry.path().filename().string();
            if (fs::is_directory(entry.path()))
                std::cout << "/";
            std::cout << "\n";
        }
    } 
    catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}

