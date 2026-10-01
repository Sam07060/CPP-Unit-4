#include <fstream>      // provides ifstream for reading files
#include <iomanip>      // provides setw and left for formatting
#include <iostream>     // provides cout/cerr for console output
#include <sstream>      // provides stringstream for parsing lines
#include <string>       // provides string

int main() {
    std::ifstream inputFile("students.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open students.txt\n";
        return 1;
    }

    std::string line;

    // Print table heading
    std::cout << std::left
              << std::setw(12) << "Roll No"
              << std::setw(25) << "Name"
              << std::setw(25) << "Course"
              << std::setw(15) << "Mobile"
              << std::setw(10) << "Marks"
              << '\n';

    std::cout << std::string(87, '-') << '\n';

    // Read and display every record
    while (std::getline(inputFile, line)) {
        std::stringstream record(line);

        std::string rollText;
        std::string name;
        std::string courseName;
        std::string mobileNumber;
        std::string marksText;

        if (std::getline(record, rollText, '|') &&
            std::getline(record, name, '|') &&
            std::getline(record, courseName, '|') &&
            std::getline(record, mobileNumber, '|') &&
            std::getline(record, marksText)) {

            int rollNumber = std::stoi(rollText);
            double marks = std::stod(marksText);

            std::cout << std::left
                      << std::setw(12) << rollNumber
                      << std::setw(25) << name
                      << std::setw(25) << courseName
                      << std::setw(15) << mobileNumber
                      << std::setw(10) << marks
                      << '\n';
        }
    }

    inputFile.close();

    return 0;
}
