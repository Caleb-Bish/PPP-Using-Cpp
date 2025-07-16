// Program to read a string from input and print out each char and its integer value.

#include <iostream>
#include <set>


std::string readString() {
    std::cout << "Please enter a string:\n";
    std::string inputData {};

    // Use getline so that we get everything from the input buffer, in case the user enters whitespace.
    // Still remove leading whitespace though, with std::ws.
    std::getline(std::cin >> std::ws, inputData);
    return inputData;
}


int main() {
    std::string stringData = readString();
    // Use a set to keep track of unique chars.
    std::set<char> uniqueChars{};

    std::cout << "CHAR | INT\n";
    std::cout << "----------\n";

    for (char character : stringData) {
        // Check if char is unique for this string.
        if (uniqueChars.contains(character)) {
            continue;
        }

        uniqueChars.insert(character);
        std::cout << character << " " << int(character) << '\n';
    }

    return 0;
}
