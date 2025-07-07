// Program to read and compare two names.
#include <iostream>

int main()
{
    std::cout << "Please enter two names:\n";
    std::string first;
    std::string second;
    std::cin >> first >> second;

    if (first == second) {
        std::cout << "That's the same name twice!\n";
    } else if (first < second) {
        std::cout << first << " is alphabetically before " << second << '\n';
    } else if (first > second) {
        std::cout << first << " is alphabetically after " << second << '\n';
    }

    return 0;
}
