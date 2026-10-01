#include <cctype>       // provides character functions
#include <fstream>      // provides ifstream for reading files
#include <iostream>     // provides cin/cout/cerr for console I/O
#include <string>       // provides std::string

// Convert a word to lowercase and remove punctuation
std::string cleanWord(const std::string& word) {
    std::string cleaned;

    for (char ch : word) {
        unsigned char uch = static_cast<unsigned char>(ch);

        if (!std::ispunct(uch)) {
            cleaned += static_cast<char>(std::tolower(uch));
        }
    }

    return cleaned;
}

int main() {
    std::ifstream inputFile("message.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open message.txt\n";
        return 1;
    }

    std::string searchWord;

    std::cout << "Enter word to search: ";
    std::cin >> searchWord;

    // Clean and convert search word to lowercase
    searchWord = cleanWord(searchWord);

    std::string word;
    int count = 0;

    while (inputFile >> word) {
        // Clean each word before comparing
        word = cleanWord(word);

        if (word == searchWord) {
            ++count;
        }
    }

    std::cout << "The word '" << searchWord
              << "' occurred " << count << " time(s).\n";

    inputFile.close();

    return 0;
}
