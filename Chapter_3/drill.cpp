// The drill exercises for Chapter 3.

#include <iostream>
#include <vector>


int main() {

    // Constant expressions.
    constexpr double floatEquality {1.0/100};


    double val1 {};
    double val2 {};

    std::cout << "Please enter two integer values (or '|' to quit):\n";
    while (std::cin >> val1 >> val2) {
        
            // doubles can be functionally equal but technically different because of floating point precision, be wary of this when doing floating-point comparisons.
        if (val1 == val2) {
            std::cout << "The numbers are equal.\n";
        } else {
            // Floating point comparison is done by performing 'close enough' calculations.
            if (std::abs(val1-val2) < floatEquality) {
                std::cout << "The numbers are almost equal.\n";
            }
            std::cout << "The larger value is: " << std::max(val1, val2) << '\n';
            std::cout << "The smaller value is: " << std::min(val1, val2) << '\n';
        }

    }


    return 0;
}
