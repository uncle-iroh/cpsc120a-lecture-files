#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    // Put command line arguments into a vector
    std::vector<std::string> command(argv, argv + argc);

    if (command.size() != 2) {
        std::cerr << "Usage: " << command[0] << " <grade>\n";
        return 1;
    }

    std::string targetGrade = command[1];
    std::ifstream file("students.csv");

    if (!file.is_open()) {
        std::cerr << "Error: Could not open 'students.csv'\n";
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        // Split the line by commas manually
        size_t firstComma = line.find(',');
        size_t secondComma = line.find(',', firstComma + 1);

        if (firstComma == std::string::npos || secondComma == std::string::npos)
            continue; // skip malformed lines

        std::string name = line.substr(0, firstComma);
        std::string id = line.substr(firstComma + 1, secondComma - firstComma - 1);
        std::string grade = line.substr(secondComma + 1);

        if (grade == targetGrade) {
            std::cout << name << " (" << id << ") - " << grade << '\n';
        }
    }

    file.close();
    return 0;
}

