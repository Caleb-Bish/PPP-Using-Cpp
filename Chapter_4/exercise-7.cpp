// Program to solve quadratic equations for x.
#include <iostream>
#include <limits>
#include <cmath>

// Class exists for throwing errors.
class Complex_Answer{};



// Function for the user to enter coefficients for a quadratic equation.
double getCoefficient (char coefficient) {
    double userChoice {};
    // Loop until valid coefficient is entered.
    while (true) {
        std::cout << "Please enter a value for coefficient \'" << coefficient << "\': ";
        std::cin >> userChoice;
        if (!std::cin) {
            std::cout << "Invalid input type detected.\n";
            // Reset error bit on std::cin.
            std::cin.clear();
            // Clear input buffer.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            // Clearing the input buffer regardless in case the user entered multiple values, or a valid value followed by invalid characters.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return userChoice;
        }
    }
}



// Calculate the Discriminant of the quadtratic equation: '(b^2)-4ac'.
double calculateDiscriminant (double a, double b, double c) {
    double bSquared {std::pow(b, 2)};

    double discriminant = bSquared - (4*a*c);

    // If the Discriminant would result in Complex Solutions, throw an error.
    if (discriminant < 0) {
        throw(Complex_Answer{});
    }

    return discriminant;
}




// Calculate and print the roots of the quadratic equation.
// Discriminant has already been calculated, so not necessary to pass coefficient 'c' as an argument.
void printRoots (double a, double b, double discriminant) {
    /* In mathematics, if the discriminant is zero then there's one real root.
     * However, using a direct comparison with doubles in C++ will pretty much always lead to discriminant == 0 being false, due to floating point rounding errors.
     * We could do an epsilon comparison, but since we've got one constant value (0) and one variable (discriminant) would have to use an absolute epsilon.
     * What would constitute as 'close enough' would be context dependent.
     * In this short program we're just going to pretend the problem doesn't exist and calculate two roots even if they're the same, it's not a huge performance issue on modern hardware.
     */
    double firstRoot = ((b*-1) + std::sqrt(discriminant)) / (a*2);
    double secondRoot = ((b*-1) - std::sqrt(discriminant)) / (a*2);

    std::cout << "The roots for this quadratic equation are:\nFirst root: "<< firstRoot << "\nSecond root: " << secondRoot << '\n';
}



int main() {

    std::cout << "Quadratic equations are of the form \'a*(x^2) + b*x + c = 0\'.\nThis program will solve a quadtratic equation for 'x'.\n";

    // Get coefficients.
    double a = getCoefficient('a');
    double b = getCoefficient('b');
    double c = getCoefficient('c');


    // Check the Discriminant.
    try {
        double discriminant = calculateDiscriminant(a, b, c);
        std::cout << "Discriminant: " << discriminant << '\n';
        printRoots(a, b, discriminant);
    } catch (Complex_Answer) {
        std::cerr << "ERROR: Discriminant results in Complex solutions.\n";
        return 1;
    }

    return 0;
}
