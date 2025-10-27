#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    // Put command-line arguments into a vector
    std::vector<std::string> command(argv, argv + argc);

    if (command.size() != 4) {
        std::cerr << "Usage: " << command[0] << " <name> <id> <grade>\n";
        return 1;
    }

    std::string name = command[1];
    std::string id = command[2];
    std::string grade = command[3];

    // Open the file in append mode
    std::ofstream file("students.txt", std::ios::app);

    if (!file.is_open()) {
        std::cerr << "Error: Could not open 'students.txt' for writing.\n";
        return 1;
    }

    // Append the new student record
    file << name << ' ' << id << ' ' << grade << '\n';

    file.close();
    std::cout << "Added student: " << name << " (" << id << ") - " << grade << '\n';
    return 0;
}

