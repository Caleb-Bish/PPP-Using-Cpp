// Program to convert between cm and inches.

#include <iostream>


int main() {
    constexpr double cmPerInch = 2.54;
    double length = 1;
    char unit = ' ';

    std::cout << "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    switch (unit) {
        // It's possible to use several case labels for a single case.
        case 'i': case 'I':
            std::cout << length << " inches == " << length*cmPerInch << " cm\n";
            break;
        case 'c': case 'C':
            std::cout << length << " cm == " << length/cmPerInch << " inches\n";
            break;
        default:
            std::cout << "Sorry, I don't know a unit called \"" << unit << "\".\n";
    }

    return 0;
}
