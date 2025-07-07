// Program to demonstrate widening and narrowing type conversion.

#include <iostream>


int main() {
    double d = 0;
    while (std::cin >> d) {
        // Narrowing conversion, double to int.
        int i = d;
        // Narrowing conversion, int to char.
        char c = i;
        std::cout << "d==" << d << '\n';
        std::cout << "i==" << i << '\n';
        std::cout << "c==" << c << '\n';
        std::cout << " char(" << c << ")\n";
    }
    
    return 0;
}
