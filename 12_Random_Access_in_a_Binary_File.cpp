#include <cstring>      // provides std::strncpy()
#include <fstream>      // provides ifstream/ofstream
#include <iostream>     // provides cin/cout/cerr

struct StudentRecord {
    int rollNumber;
    char name[30];
    float marks;
};

void addRecord(std::ofstream& file, int rollNumber,
               const char* name, float marks) {
    StudentRecord student{};

    student.rollNumber = rollNumber;
    std::strncpy(student.name, name, sizeof(student.name) - 1);
    student.marks = marks;

    file.write(reinterpret_cast<const char*>(&student),
               sizeof(student));
}

int main() {
    // Create binary file and add records
    {
        std::ofstream outputFile(
            "records.dat",
            std::ios::binary | std::ios::trunc
        );

        if (!outputFile) {
            std::cerr << "Error: Could not create records.dat\n";
            return 1;
        }

        addRecord(outputFile, 101, "Amit", 85.5F);
        addRecord(outputFile, 102, "Neha", 91.0F);
        addRecord(outputFile, 103, "Ravi", 78.0F);
    }

    // Open binary file for reading
    std::ifstream inputFile("records.dat", std::ios::binary);

    if (!inputFile) {
        std::cerr << "Error: Could not open records.dat\n";
        return 1;
    }

    int searchRollNumber;

    std::cout << "Enter roll number to search: ";
    std::cin >> searchRollNumber;

    StudentRecord student{};
    bool found = false;

    // Read records one by one and search by roll number
    while (inputFile.read(
        reinterpret_cast<char*>(&student),
        sizeof(StudentRecord))) {

        if (student.rollNumber == searchRollNumber) {
            std::cout << "\nStudent Found\n";
            std::cout << "Roll Number: " << student.rollNumber << '\n';
            std::cout << "Name: " << student.name << '\n';
            std::cout << "Marks: " << student.marks << '\n';

            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Student with roll number "
                  << searchRollNumber
                  << " not found.\n";
    }

    return 0;
}
