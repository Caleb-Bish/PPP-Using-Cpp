#include <iostream>
#include <exception>

int main() {
    try {
        // Code here.
        std::cout << "success" << '\n';
        return 0;
    }
    catch (std::exception& e) {
        std::cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        std::cerr << "Oops: unknown exception!\n";
        return 2;
    }
}
