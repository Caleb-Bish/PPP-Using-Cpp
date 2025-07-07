// Program to read in a person's name and age, then tell them how many months they've been alive.
#include <iostream>


int main() {
    std::cout << "Please enter your first name and age:\n";
    // Initialising to ???.
    std::string first_name = "???";
    double age = -1;
    // Can read in to two variables at once as in C++ the reading of strings is terminated by whitespace.
    std::cin >> first_name >> age;
    std::cout << "Hello " << first_name << ", ";
    std::cout << "you are " << age*12 << " months old!\n";
    return 0;
}
