# Object-Oriented Programming with C++ — Unit IV: Files and Streams

**Student Name:** [Samiksha Vilas Kakde]  
**PRN:** [125URA1147]  
**Class/Division:** S.Y. B.Tech. (Artificial Intelligence and Data Science) / Div. [B]  
**Course Name:** Object-Oriented Programming with C++ (ADPC303)  
**Unit:** IV — Files and Streams  

## How to Compile and Run

```bash
g++ -std=c++17 <filename>.cpp -o program
./program
```

On Windows (MinGW):

```bash
g++ -std=c++17 <filename>.cpp -o program.exe
program.exe
```

## List of Programs

| Sr. No. | File Name | Program Title | Main Concept |
|---|---|---|---|
| 1 | `01_write_text_to_file.cpp` | Write Text to a File | `ofstream`, `open()`, `close()` |
| 2 | `02_read_file_line_by_line.cpp` | Read a File Line by Line | `ifstream`, `getline()` |
| 3 | `03_append_data_to_file.cpp` | Append Data to a File | `ios::app` |
| 4 | `04_copy_file.cpp` | Copy One File into Another | File reading and writing |
| 5 | `05_count_file_contents.cpp` | Count Lines, Words, and Characters | File processing |
| 6 | `06_search_word.cpp` | Search a Word in a File | Text search |
| 7 | `07_student_records.cpp` | Store Student Records in a Text File | Structured text records |
| 8 | `08_read_search_student.cpp` | Read and Search Student Records | File parsing |
| 9 | `09_update_student_record.cpp` | Update a Record Using a Temporary File | File update workflow |
| 10 | `10_file_pointer_navigation.cpp` | File Pointer Navigation | `seekg()`, `seekp()`, `tellg()`, `tellp()` |
| 11 | `11_binary_records.cpp` | Binary File Record Writing/Reading | `write()`, `read()` |
| 12 | `12_random_binary_access.cpp` | Random Access in a Binary File | Record navigation |
| 13 | `13_file_error_handling.cpp` | File Error Handling | `fail()`, `eof()`, `bad()`, `good()` |
| 14 | `14_file_statistics.cpp` | File Statistics Mini-Project | Text analysis |
| 15 | `15_student_record_manager.cpp` | Student Record Manager Mini-Project | File-based CRUD operations |
| 16 | `16_library_record.cpp` | Library Record Mini-Project | Object-oriented file application |

## Program Descriptions

1. **Write Text to a File** — Creates a text file and writes data into it using `std::ofstream`. The program demonstrates opening, writing, checking the file, and closing the file.

2. **Read a File Line by Line** — Reads and displays the contents of a text file using `std::ifstream` and `std::getline()`. The program processes the file one line at a time.

3. **Append Data to a File** — Adds new information to the end of an existing file using `std::ios::app`, preserving the previous contents of the file.

4. **Copy One File into Another** — Reads the contents of one text file and writes them into another file. The program demonstrates basic file reading and writing operations.

5. **Count Lines, Words, and Characters** — Processes a text file character-by-character and calculates the number of lines, words, and characters contained in the file.

6. **Search a Word in a File** — Accepts a word from the user and searches for its occurrences in a text file using text-processing techniques.

7. **Store Student Records in a Text File** — Stores student information in a delimiter-separated text format using fields such as roll number, name, and marks.

8. **Read and Search Student Records** — Reads structured student records from a text file, parses the individual fields, and searches for a student using the roll number.

9. **Update a Record Using a Temporary File** — Updates an existing student record by writing the modified records into a temporary file and then replacing the original file.

10. **File Pointer Navigation** — Demonstrates file-position operations using `tellg()`, `tellp()`, `seekg()`, and `seekp()` to navigate through a file and access specific positions.

11. **Binary File Record Writing/Reading** — Uses binary file operations to store and retrieve fixed-size student records using `write()` and `read()`.

12. **Random Access in a Binary File** — Uses file positioning and fixed-size records to directly access a selected record from a binary file without reading all previous records.

13. **File Error Handling** — Demonstrates file-stream status functions such as `good()`, `eof()`, `fail()`, and `bad()` to identify different file-operation states and errors.

14. **File Statistics Mini-Project** — Allows the user to select a file and performs text analysis by calculating statistics such as lines, words, characters, vowels, digits, and spaces.

15. **Student Record Manager Mini-Project** — Provides a simple file-based student record management system with features such as adding student records, displaying records, searching by roll number, and updating marks.

16. **Library Record Mini-Project** — Implements a basic object-oriented library record system using classes and text-file storage. The program supports adding and displaying book records using file handling and object-oriented concepts.

## Files Used

| File Name | Purpose |
|---|---|
| `message.txt` | Stores sample text data for file-handling programs |
| `notes.txt` | Stores user-entered lines |
| `message_copy.txt` | Stores a copy of text from another file |
| `cpp_lines.txt` | Stores selected lines containing `C++` |
| `students.txt` | Stores text-based student records |
| `students_temp.txt` | Temporary file used while updating student records |
| `navigation.txt` | Used for file-pointer navigation demonstrations |
| `students.dat` | Stores binary student records |
| `records.dat` | Stores binary records for random access |
| `library_books.txt` | Stores library book records |

## Notes

- All programs are written in standard **C++17 or later**.
- Each `.cpp` file demonstrates a specific file-handling concept.
- Text files are handled using `ifstream`, `ofstream`, and `fstream`.
- `getline()` is used to read complete lines from text files.
- `std::ios::app` is used to append data without removing existing contents.
- `stringstream` is used for parsing delimiter-separated records.
- Temporary files are used when updating text-file records.
- File pointers are demonstrated using `seekg()`, `seekp()`, `tellg()`, and `tellp()`.
- Binary files use `read()` and `write()` with fixed-size records.
- File-stream state functions are used for error handling.
- The mini-projects demonstrate practical applications of file handling.
- Add screenshots of your compiled output to a `screenshots/` folder if your submission requires visual proof of execution.

## Important C++ Concepts Covered

- File Handling
- File Streams
- `ifstream`
- `ofstream`
- `fstream`
- `open()`
- `close()`
- `getline()`
- File opening modes
- `std::ios::in`
- `std::ios::out`
- `std::ios::app`
- `std::ios::ate`
- `std::ios::trunc`
- `std::ios::binary`
- Text file processing
- String searching
- Structured text records
- `stringstream`
- Temporary file workflow
- File pointers
- `seekg()`
- `seekp()`
- `tellg()`
- `tellp()`
- Binary file handling
- `read()`
- `write()`
- Random file access
- File error handling
- `good()`
- `eof()`
- `fail()`
- `bad()`
- File-based CRUD operations
- Classes and objects
- Object-oriented file applications

## Learning Objectives

After completing these programs, students should be able to:

1. Create, open, close, read, write, and append text files.
2. Use `ifstream`, `ofstream`, and `fstream` correctly.
3. Check file-opening and file-operation errors.
4. Process files line-by-line and word-by-word.
5. Store and retrieve structured records.
6. Use file pointers with `seekg()`, `seekp()`, `tellg()`, and `tellp()`.
7. Work with binary files using `read()` and `write()`.
8. Perform random access in binary files.
9. Update text-file records using temporary files.
10. Build basic file-based CRUD applications.
11. Apply file handling concepts to student record management.
12. Apply object-oriented programming concepts to file-based library applications.

## Screenshots

If screenshots are required, create a `screenshots/` folder and add the output images for each program.

```text
screenshots/
├── 01_output.png
├── 02_output.png
├── 03_output.png
├── 04_output.png
├── 05_output.png
├── 06_output.png
├── 07_output.png
├── 08_output.png
├── 09_output.png
├── 10_output.png
├── 11_output.png
├── 12_output.png
├── 13_output.png
├── 14_output.png
├── 15_output.png
└── 16_output.png
```

Example Markdown reference:

```markdown
![Program 1 Output](screenshots/01_output.png)
```

## Submission Structure

```text
Unit-IV-Files-and-Streams/
│
├── README.md
│
├── 01_write_text_to_file.cpp
├── 02_read_file_line_by_line.cpp
├── 03_append_data_to_file.cpp
├── 04_copy_file.cpp
├── 05_count_file_contents.cpp
├── 06_search_word.cpp
├── 07_student_records.cpp
├── 08_read_search_student.cpp
├── 09_update_student_record.cpp
├── 10_file_pointer_navigation.cpp
├── 11_binary_records.cpp
├── 12_random_binary_access.cpp
├── 13_file_error_handling.cpp
├── 14_file_statistics.cpp
├── 15_student_record_manager.cpp
├── 16_library_record.cpp
│
└── screenshots/
    ├── 01_output.png
    ├── 02_output.png
    ├── 03_output.png
    ├── 04_output.png
    ├── 05_output.png
    ├── 06_output.png
    ├── 07_output.png
    ├── 08_output.png
    ├── 09_output.png
    ├── 10_output.png
    ├── 11_output.png
    ├── 12_output.png
    ├── 13_output.png
    ├── 14_output.png
    ├── 15_output.png
    └── 16_output.png
```
