// Program to read in the first and last name of a user in a single statement.
#include <iostream>

int main() {
    std::cout << "Please enter your first and last name.\n";
    std::string firstname;
    std::string lastname;
    // Since by default the reading of strings from character input are terminated by whitespace, we can read in both the first and last name at the same time.
    std::cin >> firstname >> lastname;
    std::cout << "Hello " << lastname << ", " << firstname << '\n';
    return 0;
}
