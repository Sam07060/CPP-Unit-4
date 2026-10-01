#include <fstream>      // provides fstream for reading/writing
#include <iostream>     // provides cout/cerr for console output

int main() {
    std::fstream file("navigation.txt",
                      std::ios::in | std::ios::out | std::ios::trunc);

    if (!file) {
        std::cerr << "Error: Could not open navigation.txt\n";
        return 1;
    }

    // Write data to the file
    file << "ABCDE";
    file.flush();

    // Move input position to the last character
    file.seekg(-1, std::ios::end);

    char lastCharacter;

    if (file.get(lastCharacter)) {
        std::cout << "Last character: " << lastCharacter << '\n';
        std::cout << "Input position: " << file.tellg() << '\n';
    } else {
        std::cerr << "Error: Could not read the last character.\n";
    }

    file.close();

    return 0;
}
