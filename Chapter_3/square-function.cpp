// Program to calculate the square of an input value, but calculated by addition.

#include <iostream>


int square(int x) {
    int squaredVal {};
    for (int counter {}; counter < x; ++counter) {
        squaredVal+=x;
    }
    return squaredVal;
}


int main() {
    int originalVal {};
    int squaredVal{};

    std::cout << "Please enter an integer value:\n";
    std::cin >> originalVal;

    squaredVal = square(originalVal);
    std::cout << originalVal << " squared is: " << squaredVal << '\n';
    
    return 0;
}
