// Program to demonstrate widening conversion syntax.

#include <iostream>
#include <typeinfo>


int main() {
    int readVal {};
    std::cout << "Please enter an integer value.\n";
    std::cin >> readVal;
    std::cout << "Converted (type: " << typeid(long{readVal}).name() << ") " << long{readVal} << '\n';
    return 0;
}
