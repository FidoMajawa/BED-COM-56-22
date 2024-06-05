#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    Rectangle rect1;

    // Input length and width for rect1 from user
    float length1, width1;
    cout << "Enter length of rectangle 1: ";
    cin >> length1;
    cout << "Enter width of rectangle 1: ";
    cin >> width1;

    // Set length and width for rect1 using accessor methods
    rect1.setLength(length1);
    rect1.setWidth(width1);

    // Calculate and output area for rect1
    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // Create rect2 using overloaded constructor
    float length2, width2;
    cout << "Enter length of rectangle 2: ";
    cin >> length2;
    cout << "Enter width of rectangle 2: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    // Calculate and output area for rect2
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}
