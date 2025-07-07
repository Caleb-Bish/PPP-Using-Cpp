// Program to print a listing of characters and their respective ASCII codes, using a for loop.

#include <iostream>


int main() {

    // Loop for every letter in the alphabet.
    for (int counter {0}; counter < 26; ++counter) {
        char thisLoopChar = char('a'+counter);
        int asciiCode = int(thisLoopChar);
        std::cout << thisLoopChar << '\t' << asciiCode << '\n';
    }

    return 0;
}

