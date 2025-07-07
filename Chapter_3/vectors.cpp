// Program to demonstrate vectors.


#include <iostream>
#include <vector>


int main() {

    std::vector<int> v = {5,6,7,8,9,1,2,3};
    // You can also define a vector of a given size without specifying the element values.
    std::vector<int> example(6);

    // Can use the .size() method to return the size of a vector.
    for (int counter = 0; counter < v.size(); ++counter) {
        std::cout << v[counter] << '\n';
    }

    // You could also do the above loop in this method, meaning for each 'x' in vector v.
    for (int x : v)
        std::cout << x << '\n';


    // Can use the .push_back() method to add elements to the end of a vector.
    v.push_back(18);
    v.push_back(-5);
    for (int x : v)
        std::cout << x << '\n';

    return 0;
}
