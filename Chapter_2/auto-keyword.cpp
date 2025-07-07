// Demonstrating the 'auto' keyword.

#include <iostream>
#include <typeinfo>


int main() {
    // Compiler will determine this to be int.
    auto x = 7;
    // Compiler will determine this to be double.
    auto d = 7.7;
    // Compiler will determine this to be float.
    auto f = 7.7f;

    std::cout << "auto deduced type of 'x': " << typeid(x).name() << '\n';
    std::cout << "auto deduced type of 'd': " << typeid(d).name() << '\n';
    std::cout << "auto deduced type of 'f': " << typeid(f).name() << '\n';

    return 0;
}
