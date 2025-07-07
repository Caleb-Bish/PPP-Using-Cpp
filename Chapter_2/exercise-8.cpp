// Program to test if an integer is odd or even.

#include <iostream>


int main() {
    int inputVal {};

    std::cout << "Please enter an Integer.\n";
    std::cin >> inputVal;

    if (inputVal % 2 == 0) {
        std::cout << "The value " << inputVal << " is an even number.\n";
    } else {
        std::cout << "The value " << inputVal << " is an odd number.\n";
    }

    return 0;
}

