#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    int c = a; // third variable used to store value of a intermediately

    a = b;
    b = c;

    std::cout << a;
    std::cout << b;
    
    return 0;
}
