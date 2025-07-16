// Program to find the median of a sequence of temperatures.
// If the sequence of even length, find the median between the two middle values of the sequence.


#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<double> temps;

    // Reading in temperature values.
    // The ; at the end is because of for-loop syntax, not the statement itself.
    for (double temp; std::cin >> temp;) {
        temps.push_back(temp);
    }


    if (temps.size() <= 1) {
        std::cout << "Please enter more values.\n";
    }


    // Compute mean temperature.
    double sum {0};
    for (double x : temps)
        sum += x;
    // The value of the .size() method is NOT 0-based, so can be used for division like this.
    std::cout << "Average temperature: " << sum / temps.size() << '\n';


    //compute median temperature.
    std::ranges::sort(temps);
    // Determine if the sequence is odd or even in length.
    // If even, then find the midpoint between the two 'median' values.
    if (temps.size() % 2 != 0) {
        // Integer division discards the floating point.
        std::cout << "Median temperature: " << temps[(temps.size()/2)] << '\n';
    } else {
        // Recall that .size() uses 1-based indexing, however vectors use 0-based indexing.
        double medianRange { temps[(temps.size()/2)] - temps[(temps.size()/2)-1] };

        double trueMedian { temps[(temps.size()/2)-1] + (medianRange/2) };
        std::cout << "Median Temperature: " << trueMedian << '\n';
    }

    return 0;
}
