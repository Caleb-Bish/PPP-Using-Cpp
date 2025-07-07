// Program to convert spelled-out numbers into digits.

#include <iostream>


int main() {
    std::string inputString;
    int convertedString {};

    std::cout << "Please enter the string \"zero\", \"one\", \"two\", \"three\", or \"four\":\n";
    std::cin >> inputString;

    // Convert string to all lowercase.
    // Effectively, std::transform applies a function to each element of a range, in this case every character in a string.
    // Here, we're modifying inplace.
    // The horrible looking thing at the end is a lambda function.
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), [](unsigned char c){return std::tolower(c);});

    if (inputString == "zero")
            convertedString = 0;
    else if (inputString == "one")
            convertedString = 1;
    else if (inputString == "two")
            convertedString = 2;
    else if (inputString == "three")
            convertedString = 3;
    else if (inputString == "four")
            convertedString = 4;
    else {
        std::cout << "stupid computer!\n";
        return 1;
    }

    std::cout << inputString << " is: " << convertedString << '\n';
    return 0;
}
