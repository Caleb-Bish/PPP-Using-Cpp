// Code snippet from chapter 4 section 5, demonstrating bad practice for error reporting.

#include <iostream>
#include <string>


char ask_user(std::string question) {
    // Ask user for a yesr-or-no answer;
    // return 'b' to idnicate a bad answer (i.e., not yes or no).
    std::cout << question << "? (yes or no)\n";
    std::string answer;
    std::cin >> answer;
    
    if (answer == "y" || answer == "yes") {
        return 'y';
    } else if (answer == "n" || answer == "no") {
        return 'n';
    } else {
        // 'b' for bad answer.
        return 'b';
    }
}



int area (int length, int width) {
    // Calculate area of a rectangle;
    // return -1 to indicate a bad argument.
    if (length<= 0 || width <= 0) {
        return -1;
    } else {
        return length * width;
    }
}
