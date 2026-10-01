#include <fstream>      // provides ifstream for reading files
#include <iostream>     // provides cin/cout/cerr
#include <string>       // provides std::string

int main() {
    std::ifstream inputFile;
    std::string fileName;

    // Keep prompting until a valid file is opened
    while (!inputFile.is_open()) {
        std::cout << "Enter file name: ";
        std::getline(std::cin, fileName);

        inputFile.open(fileName);

        if (!inputFile.is_open()) {
            std::cerr << "Error: Could not open \"" 
                      << fileName << "\". Try again.\n";
        }
    }

    std::cout << "\nFile opened successfully!\n";
    std::cout << "File contents:\n";

    std::string line;

    while (std::getline(inputFile, line)) {
        std::cout << line << '\n';
    }

    // Check why reading stopped
    if (inputFile.eof()) {
        std::cout << "\nEnd of file reached normally.\n";
    } else if (inputFile.bad()) {
        std::cerr << "\nA serious file I/O error occurred.\n";
    } else if (inputFile.fail()) {
        std::cerr << "\nA logical file read error occurred.\n";
    }

    inputFile.close();

    return 0;
}
