#include <iostream>


int main() {
    int number_of_words = 0;
    std::string previous;
    std::string current;

    while (std::cin >> current) {
        // Using the prefix increment operator here, but since it's a statement by itself it doesn't really matter.
        ++number_of_words;
        if (previous == current) {
            std::cout << "word number " << number_of_words << " repeated: " << current << '\n';
        }
        previous = current;
    }

    return 0;
}
