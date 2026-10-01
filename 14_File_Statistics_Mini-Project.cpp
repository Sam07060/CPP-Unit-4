#include <cctype>       // provides character classification functions
#include <fstream>      // provides ifstream for reading files
#include <iostream>     // provides cin/cout/cerr
#include <string>       // provides std::string

bool isVowel(char ch) {
    ch = static_cast<char>(
        std::tolower(static_cast<unsigned char>(ch))
    );

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

int main() {
    std::string fileName;

    std::cout << "Enter file name: ";
    std::getline(std::cin, fileName);

    std::ifstream inputFile(fileName);

    if (!inputFile) {
        std::cerr << "Error: Could not open " << fileName << '\n';
        return 1;
    }

    std::size_t lines = 0;
    std::size_t words = 0;
    std::size_t characters = 0;
    std::size_t vowels = 0;
    std::size_t consonants = 0;
    std::size_t digits = 0;
    std::size_t spaces = 0;

    bool insideWord = false;
    char ch;

    while (inputFile.get(ch)) {
        ++characters;

        // Count lines
        if (ch == '\n') {
            ++lines;
        }

        // Count words and spaces
        if (std::isspace(static_cast<unsigned char>(ch))) {
            if (ch == ' ') {
                ++spaces;
            }

            insideWord = false;
        }
        else {
            if (!insideWord) {
                ++words;
                insideWord = true;
            }
        }

        // Count vowels and consonants
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            if (isVowel(ch)) {
                ++vowels;
            } else {
                ++consonants;
            }
        }

        // Count digits
        if (std::isdigit(static_cast<unsigned char>(ch))) {
            ++digits;
        }
    }

    // Count the final line if the file doesn't end with '\n'
    if (characters > 0) {
        inputFile.clear();
        inputFile.seekg(-1, std::ios::end);

        char lastCharacter;
        inputFile.get(lastCharacter);

        if (lastCharacter != '\n') {
            ++lines;
        }
    }

    std::cout << "\nFile Statistics\n";
    std::cout << "-------------------------\n";
    std::cout << "File: " << fileName << '\n';
    std::cout << "Lines: " << lines << '\n';
    std::cout << "Words: " << words << '\n';
    std::cout << "Characters: " << characters << '\n';
    std::cout << "Vowels: " << vowels << '\n';
    std::cout << "Consonants: " << consonants << '\n';
    std::cout << "Digits: " << digits << '\n';
    std::cout << "Spaces: " << spaces << '\n';

    inputFile.close();

    return 0;
}
