// main.cpp
// A test program for the Point class
#include <iostream>
#include "Point.h"

int main() {
    // Create Point objects using default and parameterized constructors
    Point p1;                 // Default constructor
    Point p2(3.0, 4.0);       // Parameterized constructor
    Point p3(3.0, 4.0);       // Another Point object with the same coordinates as p2

    // Test GetX and GetY methods
    std::cout << "p1: (" << p1.GetX() << ", " << p1.GetY() << ")" << std::endl;
    std::cout << "p2: (" << p2.GetX() << ", " << p2.GetY() << ")" << std::endl;

    // Test SetX and SetY methods
    p1.SetX(1.0);
    p1.SetY(2.0);
    std::cout << "p1 after setting values: (" << p1.GetX() << ", " << p1.GetY() << ")" << std::endl;

    // Test equality operator
    if (p2 == p3) {
        std::cout << "p2 and p3 are equal." << std::endl;
    } else {
        std::cout << "p2 and p3 are not equal." << std::endl;
    }

    // Test subtraction operator (distance between points)
    std::cout << "Distance between p1 and p2: " << p1 - p2 << std::endl;

    return 0;
}
