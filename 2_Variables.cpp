// ---------------------------
// Variables

// in programming variables are used to temporarily store data in computer's memory
// technically variable is a name of location of memory where the value is stored in memory
// so that can read the value stored at that location with same variable name


#include <iostream>

int main() {
    int file_size = 100, counter = 0;
    file_size = 100; // intializing a variable
    // int file_size = 100;
    double sales = 999.99;

    std::cout << file_size;
    std::cout << sales;
    std::cout << counter;

    return 0;
}   



// in C++ we cant leave a variable un-initialized we need to assign some value(0 in case of int/double). in C sharp or Java it happens automatically 
// declaring multiple variables in single line is discouraged, we should declare and initialize in separate lines.
