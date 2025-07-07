// Program to convert between cm and inches.

#include <iostream>


int main() {
    constexpr double cmPerInch = 2.54;
    double length = 1;
    char unit = ' ';

    std::cout << "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    if (unit == 'i')
        std::cout << length << " inches == " << length*cmPerInch << " cm\n";
    else if (unit == 'c')
        std::cout << length << " cm == " << length/cmPerInch << " inches\n";
    else
        std::cout << "Sorry, I don't know a unit called \"" << unit << "\".\n";

    return 0;
}
