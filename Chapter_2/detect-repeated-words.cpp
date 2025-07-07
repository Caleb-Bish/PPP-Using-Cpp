// Program to take an input string and provide output if there are two words repeated in a row.
#include <iostream>

int main() {
    std::string previous;
    std::string current;

    // Can read from cin within a loop.
    while (std::cin >> current) {
        if (previous == current) {
            std::cout << "repeated word: " << current << '\n';
        }
        previous = current;
    }
    return 0;
}
