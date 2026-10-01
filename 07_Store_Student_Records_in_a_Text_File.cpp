#include <fstream>      // provides ofstream for writing files
#include <iostream>     // provides cin/cout/cerr for console I/O
#include <limits>       // provides numeric_limits for cin.ignore()
#include <string>       // provides std::string

int main() {
    std::ofstream outputFile("students.txt", std::ios::app);

    if (!outputFile) {
        std::cerr << "Error: Could not open students.txt\n";
        return 1;
    }

    int rollNumber;
    std::string name;
    std::string courseName;
    std::string mobileNumber;
    double marks;

    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter name: ";
    std::getline(std::cin, name);

    std::cout << "Enter course name: ";
    std::getline(std::cin, courseName);

    std::cout << "Enter mobile number: ";
    std::getline(std::cin, mobileNumber);

    std::cout << "Enter marks: ";
    std::cin >> marks;

    // Save all fields separated by '|'
    outputFile << rollNumber << '|'
               << name << '|'
               << courseName << '|'
               << mobileNumber << '|'
               << marks << '\n';

    outputFile.close();

    std::cout << "Student record saved successfully.\n";

    return 0;
}
