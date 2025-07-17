// Program for analysing a vector representing distances.

#include <iostream>
#include <vector>
#include <limits>


std::vector<double> getDistances() {
    std::vector<double> distances {};

    std::cout << "Please enter a sequence of distances between cities along a given route.\n";

    for (double readIn; std::cin >> readIn;) {
        //std::cout << readIn << '\n';
        distances.push_back(readIn);
    }
    return distances;

}



int main() {

    std::vector<double> distances {};
    double maxFound {};
    double minFound {};
    double totalDistance {};
    double meanDistance {};

    distances = getDistances();
    
    // Initialise maximum and minimum distances.
    maxFound = distances[0];
    minFound = distances[0];


    // Calculate metrics.
    for (double counter : distances) {
        totalDistance += counter;
        maxFound = std::max(counter, maxFound);
        minFound = std::min(counter, minFound);
    }

    meanDistance = totalDistance / distances.size();


    // Output metrics.
    std::cout << "METRICS\n-------\n";
    std::cout << "Total distance: " << totalDistance << '\n';
    std::cout << "Mean distance: " << meanDistance << '\n';
    std::cout << "Max distance: " << maxFound << '\n';
    std::cout << "Min distance: " << minFound << '\n';


    return 0;
}
