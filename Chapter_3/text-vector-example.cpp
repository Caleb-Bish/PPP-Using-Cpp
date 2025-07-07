// Program to demonstrate vectors, by building a simple dictionary (a list of sorted words).

#include <iostream>
#include <vector>
#include <algorithm>


int main() {

    std::vector<std::string> words;
    for (std::string temp; std::cin >> temp;) {
        words.push_back(temp);
    }
    std::cout << "Number of words: " << words.size() << '\n';

    // Sort the words.
    std::ranges::sort(words);

    // Stop repeating words from being printed.
    // Works because we've already sorted the wordlist.
    for (int counter {0}; counter < words.size(); ++counter) {
        if (counter == 0 || words[counter-1]!=words[counter]) {
            std::cout << words[counter] << '\n';
        }
    }

    return 0;
}
    
