// Program to copy input to output, censoring certain words.

#include <iostream>
#include <vector>


int main() {

    std::vector<std::string> inputSentence;
    for (std::string temp; std::cin >> temp;) {
        inputSentence.push_back(temp);
    }

    // The list of banned words.
    std::vector<std::string> bannedWords = {"bonnet", "Fiat"};


    std::string outputWord;
    // 2D loop.
    for (std::string outer : inputSentence) {
        for (std::string inner : bannedWords) {
            if (inner == outer) {
                outputWord = "BEEP";
                break;
            } else {
                outputWord = outer;
            }
        }
        std::cout << outputWord << '\n';
    }


    return 0;
}
