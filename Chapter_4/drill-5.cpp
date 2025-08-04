#include <iostream>
#include <exception>
#include <string>
#include <vector>


int main() {
    try {
        // Code here.
        int res = 7;
        std::vector<int> v(10);
        v[5] = res;
        std::cout << "Success!\n";
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
