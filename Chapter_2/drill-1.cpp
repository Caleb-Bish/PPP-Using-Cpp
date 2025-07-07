#include <iostream>

int main() {
    std::cout << "Please enter the name of the person you want to write to.\n";
    std::string recipient;
    std::cin >> recipient;
    std::cout << "Dear " << recipient << ",\n";
    return 0;
}
