## C++ Input/Output with <iostream>

This file explains essential concepts for performing input and output operations in C++ programs using the <iostream> header.
### Key Concepts
* <iostream> Header: This header file provides functionalities for input/output (I/O) operations.
    Standard Streams:
  ```
        std::cout: An object of the ostream class used for sending formatted output to the console (typically).
        std::cin: An object of the istream class used for reading formatted input from the console (typically).
        std::cerr and std::clog: Objects of the ostream class used for printing error messages. std::cerr is unbuffered, while std::clog might be buffered.
  ```
* Stream Insertion Operator (<<): Used to send data to output streams.
    Manipulators: Functions that modify the behavior of streams for formatting output (e.g., std::endl, std::setw, std::fixed, std::setprecision).

### Basic Usage C++
```
#include <iostream>

int main() {
  // Not recommended for large projects (potential naming conflicts)
  using namespace std;

  // Print to console
  cout << "Hello, World!" << endl;

  // Read an integer
  int number;
  cout << "Enter a number: ";
  cin >> number;

  // Print with formatting
  cout << "You entered: " << setw(5) << number << endl;

  return 0;
}
```
### Advanced Formatting

    std::setw(width): Sets the minimum field width for output.
    std::fixed and std::setprecision(precision): Controls formatting of floating-point numbers (fixed notation and number of decimal places).

Buffer Management

    std::endl: Inserts a newline character and flushes the output buffer.
    std::flush: Forces the output buffer to be flushed.

Reading Input

    std::cin.ignore(): Discards characters from the input buffer (useful after reading numbers to avoid leftover characters).
    std::getline(cin, string_variable): Reads a line of text from the console and stores it in a string variable.

Note: Consider error handling for robust input validation in practical applications.
