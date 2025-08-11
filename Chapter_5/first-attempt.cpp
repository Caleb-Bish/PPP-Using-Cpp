// Following along the 'first attempt' coding example in Chapter 5.
// This program demonstrates how order of operands matters.
#include <iostream>
#include <stdexcept>


// Function for throwing runtime errors.
void error (std::string s) {
    throw std::runtime_error{s};
}



int main() {
    std::cout << "Please enter expression (we can handle +, -, *, and /)\n";
    std::cout << "add an 'x' to end expression (e.g., 1+2*3x):";

    int lval {0};
    int rval {0};
    // Read left-most operand.
    std::cin >> lval;
    if (!std::cin) {
        error("no first operand");
    }

    // Read operator and right-hand operand repeatedly.
    for (char op; std::cin >> op;) {
        if (op != 'x') {
            std::cin >> rval;
        }
        if (!std::cin) {
            error("no second operand");
        }

        switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            // Not another operator: print result.
            default:
                std::cout << "Result: " << lval << '\n';
                return 0;
        }
    }
    error("bad expression");
}
