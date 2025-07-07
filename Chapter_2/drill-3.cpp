#include <iostream>

int main() {
    std::cout << "Please enter the name of the person you want to write to.\n";
    std::string recipient;
    std::cin >> recipient;
    std::cout << "Dear " << recipient << ",\n";
    std::cout << "\tI miss you. I'm sorry things were the way they were.\n";
    std::cout << "\tBut this is just a programming exercise anyway.\n";

    std::cout << "\n\tWho's another friend?\n";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout <<"\tHave you seen " << friend_name << " lately?\n";
    return 0;
}
