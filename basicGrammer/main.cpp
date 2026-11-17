#include <iostream>

int main()
{
    std::cout << 5; // print the literal number `5`
    std::cout << '\n';
    std::cout << -6.7; // print the literal number `-6.7`
    std::cout << '\n';
    std::cout << "H\n";   // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello`
    std::cout << '\n';

    // int width{5};       // define variable width and initialize with initial value 5
    int width{};        // value-initialization / zero-initialization to value 0
    std::cout << width << std::endl; // prints 5

    int x{5}; // variable x defined

    // but not used anywhere

    std::cout << "Hello" << " world!" << std::endl;

    std::cout << "x is equal to: " << x;

    return 0;
}