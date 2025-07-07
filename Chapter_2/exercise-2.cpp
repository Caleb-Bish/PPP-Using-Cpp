// Program to convert from miles to kilometres.

#include <iostream>


int main() {
    // Using list value initialisation.
    double miles {};
    double kilometres {};

    std::cout << "Please enter a number of miles:\n";
    std::cin >> miles;
    kilometres = miles * 1.609;
    std::cout << miles << " miles is approx. " << kilometres << " kilometres.\n";

    return 0;
}
