// Program to convert celsius to kelvin.
// Modified to check for erroneous kelvin temperatures within ctok().
#include <iostream>

// kelvin and celsius scales have the same magnitude.
constexpr double KELVIN_MAGNITUDE {273.25};
// Class only used for throwing errors.
class Bad_Celsius{};


// Converts Celsius to Kelvin.
double ctok(double c) {
    // Check if provided celsius value is logically possible.
    if (c < -273.15) {
        throw Bad_Celsius{};
    }
    double k = c + KELVIN_MAGNITUDE;
    return k;
}


int main() {
    double c {0};
    std::cin >> c;
    try {
        double k = ctok(c);
        std::cout << "Celsius: " << c << "\tKelvin: " << k << '\n';
    } catch(Bad_Celsius) {
        std::cerr << "Invalid Celsius value provided by user.\n";
        return 1;
    }
    return 0;
}
