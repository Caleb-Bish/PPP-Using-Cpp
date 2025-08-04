// A small program to demonstrate using exceptions to catch bad arguments.

#include <iostream>


// A type specifically for reporting errors from area().
// In this program, it serves no purpose other than to provide something unique to throw from area() so that some catch can recognise it as the kind of exception thrown by area().
class Bad_area{};

int area(int length, int width) {
    // Calculate area of a rectangle.
    // Throw a Bad_area exception in case of a bad argument.
    if (length <= 0 || width <= 0) {
        throw Bad_area{};
    }
    return length*width;
}


int framed_area(int x, int y) {
    // Calculate area within a picture frame.
    return area(x-2, y-2);
}



void test(int x, int y, int z) {
    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = area1 / area3;
}


int main() {
try {
    test(-1,2,4);
}
catch (Bad_area) {
    std::cout << "Bad arguments to area()\n";
}
return 0;
}
