// Program to convert celsius to kelvin.
// Modified to check for erroneous kelvin temperatures.
#include <iostream>

// kelvin and celsius scales have the same magnitude.
constexpr double KELVIN_MAGNITUDE {273.25};


// Converts Celsius to Kelvin.
double ctok(double c) {
    double k = c + KELVIN_MAGNITUDE;
    return k;
}


int main() {
    double c {0};
    std::cin >> c;
    // Check if provided celsius value is logically possible.
    if (c < -273.15) {
        std::cerr << "Invalid Celsius value provided by user.\n";
        return 1;
    }

    double k = ctok(c);
    std::cout << "Celsius: " << c << "\tKelvin: " << k << '\n';
    return 0;
}
