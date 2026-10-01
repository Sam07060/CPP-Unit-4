#include <cctype>       // provides character classification functions
#include <fstream>      // provides ifstream for reading files
#include <iostream>     // provides cout/cerr for console output

int main() {
    std::ifstream inputFile("message.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open message.txt\n";
        return 1;
    }

    std::size_t vowels = 0;
    std::size_t consonants = 0;
    std::size_t digits = 0;
    std::size_t spaces = 0;
    std::size_t punctuation = 0;

    char ch;

    while (inputFile.get(ch)) {
        unsigned char uch = static_cast<unsigned char>(ch);

        if (std::isalpha(uch)) {
            // Convert to lowercase for easier vowel checking
            char lower = static_cast<char>(std::tolower(uch));

            if (lower == 'a' || lower == 'e' ||
                lower == 'i' || lower == 'o' ||
                lower == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
        else if (std::isdigit(uch)) {
            ++digits;
        }
        else if (std::isspace(uch)) {
            ++spaces;
        }
        else if (std::ispunct(uch)) {
            ++punctuation;
        }
    }

    inputFile.close();

    std::cout << "Vowels: " << vowels << '\n';
    std::cout << "Consonants: " << consonants << '\n';
    std::cout << "Digits: " << digits << '\n';
    std::cout << "Spaces: " << spaces << '\n';
    std::cout << "Punctuation characters: " << punctuation << '\n';

    return 0;
}
