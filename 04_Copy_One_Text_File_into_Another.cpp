#include <fstream>      // provides ifstream/ofstream for reading and writing
#include <iostream>     // provides cout/cerr for console output
#include <string>       // provides std::string to hold each line

int main() {
    std::ifstream sourceFile("message.txt");
    std::ofstream destinationFile("cpp_lines.txt");

    if (!sourceFile) {
        std::cerr << "Error: Could not open source file.\n";
        return 1;
    }

    if (!destinationFile) {
        std::cerr << "Error: Could not create destination file.\n";
        return 1;
    }

    std::string line;

    while (std::getline(sourceFile, line)) {
        // Check if the line contains the word "C++"
        if (line.find("C++") != std::string::npos) {
            destinationFile << line << '\n';
        }
    }

    sourceFile.close();
    destinationFile.close();

    std::cout << "Lines containing C++ copied to cpp_lines.txt\n";

    return 0;
}
