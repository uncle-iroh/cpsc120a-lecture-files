#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    // Store command-line arguments in a vector
    std::vector<std::string> command(argv, argv + argc);

    if (command.size() != 2) {
        std::cerr << "Usage: " << command[0] << " <grade>\n";
        return 1;
    }

    std::string targetGrade = command[1];
    std::ifstream file("students.txt"); // space-separated file

    if (!file.is_open()) {
        std::cerr << "Error: Could not open 'students.txt'\n";
        return 1;
    }

    std::string name, id, grade;
    while (file >> name >> id >> grade) {
        if (grade == targetGrade) {
            std::cout << name << " (" << id << ") - " << grade << '\n';
        }
    }

    file.close();
    return 0;
}

