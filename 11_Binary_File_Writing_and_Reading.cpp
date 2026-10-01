#include <cstring>      // provides std::strncpy()
#include <fstream>      // provides ifstream/ofstream
#include <iostream>     // provides cout/cerr

struct StudentRecord {
    int rollNumber;
    char name[30];
    float marks;
};

int main() {
    StudentRecord students[3] = {
        {101, "Amit Patil", 85.5F},
        {102, "Rahul Sharma", 90.0F},
        {103, "Priya Deshmukh", 88.5F}
    };

    // Write three records to the binary file
    {
        std::ofstream outputFile("students.dat", std::ios::binary);

        if (!outputFile) {
            std::cerr << "Error: Could not create students.dat\n";
            return 1;
        }

        for (int i = 0; i < 3; ++i) {
            outputFile.write(
                reinterpret_cast<const char*>(&students[i]),
                sizeof(StudentRecord)
            );
        }
    }

    // Read all three records from the binary file
    {
        std::ifstream inputFile("students.dat", std::ios::binary);

        if (!inputFile) {
            std::cerr << "Error: Could not open students.dat\n";
            return 1;
        }

        StudentRecord readStudent;

        std::cout << "Student Records:\n";
        std::cout << "-------------------------\n";

        while (inputFile.read(
            reinterpret_cast<char*>(&readStudent),
            sizeof(StudentRecord))) {

            std::cout << "Roll Number: " << readStudent.rollNumber << '\n';
            std::cout << "Name: " << readStudent.name << '\n';
            std::cout << "Marks: " << readStudent.marks << '\n';
            std::cout << "-------------------------\n";
        }
    }

    return 0;
}
