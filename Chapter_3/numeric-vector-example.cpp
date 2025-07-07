// Program to demonstrate vectors, it takes in a series of temperature values and outputs some averages. 


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

    // Compute mean temperature.
    double sum {0};
    for (double x : temps)
        sum += x;
    // The value of the .size() method is NOT 0-based, so can be used for division like this.
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    //compute median temperature.
    std::ranges::sort(temps);
    std::cout << "Median temperature: " << temps[temps.size()/2] << '\n';

    return 0;
}
