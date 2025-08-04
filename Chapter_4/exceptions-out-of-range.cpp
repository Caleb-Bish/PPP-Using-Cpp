// A small program to demostrate catching out_of_range errors.
#include <iostream>
#include <vector>


int main() {
    try {
        // A vector of ints.
        std::vector<int> v;
        // Set values.
        for (int x; std::cin >> x;) {
            v.push_back(x);
        }

        // Print values.
        // The <= here will lead to an out_of_range exception.
        for (int i = 0; i <= v.size(); ++i) {
            // C++ when using the [] operator for a vector doesn't actually result in an out-of-bounds exception when accessing out-of-bounds elements.
            // It will just result in undefined behaviour.
            std::cout << "v[" << i << "] == " << v.at(i) << '\n';
       }
        return 0;
    }
    catch (std::out_of_range) {
        std::cerr << "Oops! Range error\n";
        return 1;
    }
    // Catch all other exceptions.
    catch (...) {
        std::cerr << "Exception: something went wrong\n";
        return 2;
    }
}
