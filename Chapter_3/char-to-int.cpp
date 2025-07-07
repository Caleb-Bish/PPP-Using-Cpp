// Program to print a listing of characters and their respective ASCII codes, using a while loop.

#include <iostream>


int main() {
    int counter {0};

    // Loop for every letter in the alphabet.
    while (counter < 26) {
        char thisLoopChar = char('a'+counter);
        int asciiCode = int(thisLoopChar);
        std::cout << thisLoopChar << '\t' << asciiCode << '\n';
        ++counter;
    }

    return 0;
}

