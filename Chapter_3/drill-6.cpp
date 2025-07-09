// The drill exercises for Chapter 3.

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>


int main() {

    // Vector for keeping track of all values (in metres).
    std::vector<double> allValues{};

    // Data pertaining to the values entered. 
    double readVal {};
    double smallestVal {std::numeric_limits<double>::max()};
    double largestVal {std::numeric_limits<double>::lowest()};
    double sum {};
    int valueCount {};


    // Data pertaining to the units of entered values.
    std::string unit;
    std::vector<std::string> validUnits{"cm","m","in","ft"};
    bool isValidUnit {false};
    // contant expressions for conversion of units to metres.
    constexpr double cmToM {1.0 / 100};
    constexpr double inToM {cmToM * 2.54};
    constexpr double ftToM{inToM * 12};


    std::cout << "Please enter an integer value and a unit (or '|' to quit).\nValid units are 'cm', 'm', 'in', or 'ft': ";
    // Main loop.
    while (std::cin >> readVal) {
        // Checking the unit.
        // std::cin discards leading whitespace.
        isValidUnit = false;
        std::cin >> unit;
        for (std::string unitCheck : validUnits) {
            if (unit == unitCheck) {
                isValidUnit = true;
                    
                // Convert value into metres.
                if (unitCheck == "cm") {
                    readVal *= cmToM;
                    break;
                } else if (unitCheck == "m") {
                    break;
                } else if (unitCheck == "in") {
                    readVal *= inToM;
                    break;
                } else if (unitCheck == "ft") {
                    readVal *= ftToM;
                    break;
                }
            }
        }

        // Reject values with non-valid units.
        if (!isValidUnit) {
            std::cout << "The unit entered was not valid.\n";
            std::cout << "Please enter an integer value and a unit (or '|' to quit).\nValid units are 'cm', 'm', 'in', or 'ft': ";
            continue;
        } else {
            allValues.push_back(readVal);
            sum += readVal;
            ++valueCount;
        }



        std::cout << "The value entered is (in metres): " << readVal << '\n'; 

        // Check if this is the first (valid) loop iteration.
        if (valueCount <= 1) {
            largestVal = readVal;
            smallestVal = readVal;
        } else if (readVal > largestVal) {
            std::cout << "(the largest so far).\n";
            largestVal = readVal;
        } else if (readVal < smallestVal) {
            std::cout << "(the smallest so far).\n";
            smallestVal = readVal;
        }

        std::cout << "\nPlease enter an integer value and a unit (or '|' to quit).\nValid units are 'cm', 'm', 'in', or 'ft': ";
    }
    
    
    std::sort(allValues.begin(), allValues.end());
    
    // Print out statistics.
    std::cout << "\nSTATISTICS\n" << "----------\n"; 
    std::cout << "Smallest: " << smallestVal << '\n';
    std::cout << "Largest: " << largestVal << '\n';
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Count of values: " << valueCount << '\n';
    std::cout << "List of values:";
    for (double index : allValues) {
        std::cout << " " << index;
    }
    std::cout << '\n';


    return 0;
}
