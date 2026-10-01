#include <fstream>   // provides ofstream for file I/O
#include <iostream>  // provides cout/cerr for console input/output
#include <string>    // provides string and getline

int main() {
    std::ofstream outputFile("notes.txt");

    if (!outputFile) {
        std::cerr << "Error: Could not create notes.txt\n";
        return 1;
    }

    std::string line;

    std::cout << "Enter three lines:\n";

    for (int i = 1; i <= 3; ++i) {
        std::getline(std::cin, line);
        outputFile << line << '\n';
    }

    outputFile.close();

    std::cout << "Data written successfully to notes.txt\n";

    return 0;
}
