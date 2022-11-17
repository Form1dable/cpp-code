// An object is a region of storage that has a value and other associated properties assigned in a memory location

// A named object is called a variable and the name is called an identifier

#include <iostream>

int main() {
    int x;  // defining a variable named x, of type int
    // At runtime the variable will be instantiated. Instantian is when an object is created and assigned to memory
    // A variable is accessed by accessing the memory location in the physical ram

    int salary = 3938134;  // 4 bytes
    char initial = 'a';  // 1 byte
    bool allowed = true;  // 1 byte
    float price = 10.5;  // 4 byte
    double acceleration = 10.58585;  // 8 byte
    wchar_t wide_character = 'A'; // 2 to 4 bytes

    // Data Type Modifiers
    // 1. signed
    // 2. unsigned
    // 3. short
    // 4. long

    std::cout << sizeof(salary) << std::endl;
    std::cout << sizeof(initial) << std::endl;
    std::cout << sizeof(allowed) << std::endl;
    std::cout << sizeof(price) << std::endl;
    std::cout << sizeof(acceleration) << std::endl;
    std::cout << sizeof(wide_character) << std::endl;

    return 0;
}