// Program to convert between celsius and fahrenheit 
#include <iostream>
#include <string>
#include <limits>


// constexpr for absolute zero in celsius and fahrenheit.
constexpr double ZERO_CELSIUS {-273.15};
constexpr double ZERO_FAHRENHEIT {-459.67};
// Class only used for throwing errors.
class Bad_Temp{};


// Converts Celsius to Fahrenheit.
double ctof(double c) {
    // Check if provided Celsius value is logically possible.
    if (c < ZERO_CELSIUS) {
        throw Bad_Temp{};
    }
    // Calculate Fahrenheit.
    double f = c * 1.8 + 32;
    return f;
}



// Converts Fahrenheit to Celsius.
double ftoc(double f) {
    // Check if provided Fahrenheit value is logically possible.
    if (f < ZERO_FAHRENHEIT) {
        throw Bad_Temp{};
    }
    // Calculate Celsius.
    double c = (f - 32) / 1.8;
    return c;
}



// Get and return the user mode desired by the user.
char getUserMode() {
    char userInput{};
    while (true) {
        std::cout << "Please enter (f) for Fahrenheit to Celsius, or (c) for Celsius to Fahrenheit: ";
        std::cin >> userInput;

        if (userInput == 'f' || userInput == 'c') {
            return userInput;
        } else {
            std::cout << "Invalid input detected.\n";
            // Clear the input buffer.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}



// Get and return the temperature value the user wishes to convert.
double getUserTemp() {
    double userTemp{};
    while (true) {
        std::cout << "Please enter the temperature value you wish to convert: ";
        std::cin >> userTemp;
        
        // Check if a numeric value was entered.
        if (!std::cin) {
            std::cout << "Invalid input detected.\n";
            // Clear the input buffer.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        return userTemp;
    }
}



int main() {
    std::cout << "Celsius / Fahrenheit converer.\n";

    char userSelection = getUserMode();
    double tempToConvert = getUserTemp();


    try {
        if (userSelection == 'c') {
            double f = ctof(tempToConvert);
            std::cout << "Celsius: " << tempToConvert << "\tFahrenheit: " << f << '\n';
        } else if (userSelection == 'f') {
            double c = ftoc(tempToConvert);
            std::cout << "Fahrenheit: " << tempToConvert << "\tCelsius: " << c << '\n';
        }
    } catch(Bad_Temp) {
        std::cerr << "Invalid temperature value provided by user.\n";
        return 1;
    }


    return 0;
}
