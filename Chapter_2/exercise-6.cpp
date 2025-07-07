// Program to output a stream of integers in numerical order.

#include <iostream>
#include <algorithm>


int main() {

    int val1 {};
    int val2 {};
    int val3 {};

    std::cout << "Please enter three integer values, separated by whitespace.\n";
    std::cin >> val1 >> val2 >> val3;

    if (val1 > val2)
        std::swap(val1, val2);
    if (val2 > val3)
        std::swap(val2, val3);
    if (val1 > val2)
        std::swap(val1, val2);

    std::cout << "In order: " << val1 << ", " << val2 << ", " << val3 << '\n';

    return 0;
}
