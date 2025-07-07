// Program to compare 2 integer variables.

#include <iostream>
#include <cmath>
#include <algorithm>

int gcd(int val1, int val2) {

    int gcd{};
    gcd = std::min(val1, val2);

    while (gcd > 1) {
        if (val1 % gcd == 0 && val2 % gcd == 0) {
            break;
        }
        --gcd;
    }

    return gcd;
}



int main() {
    int val1 {};
    int val2 {};
    std::cout << "Please enter two integer values, separated by whitespace.\n";
    std::cin >> val1 >> val2;

    // Which value is greater.
    if (val1 == val2) {
        std::cout << "values are the same.\n";
    } else if (val1 > val2) {
        std::cout << "val1 is greater.\n";
    } else {
        std::cout << "val2 is greater.\n";
    }

    // Sum of values.
    std::cout << "sum of values: " << val1+val2 << '\n';

    // Difference between values.
    std::cout << "Difference between values: " << std::abs(val1-val2) << '\n';

    // Product of values.
    std::cout << "Product of values: " << val1*val2 << '\n';

    // Ratio of values.
    int commonDenom {gcd(val1, val2)};
    std::cout << "Ratio of values: " << (val1/commonDenom) << ':' << (val2/commonDenom) << '\n';

    return 0;
}
