#include <iostream>

int main() {
    std::cout << "Please enter the name of the person you want to write to.\n";
    std::string recipient;
    std::cin >> recipient;
    std::cout << "Dear " << recipient << ",\n";
    std::cout << "\tI miss you. I'm sorry things were the way they were.\n";
    std::cout << "\tBut this is just a programming exercise anyway.\n";
    return 0;
}
