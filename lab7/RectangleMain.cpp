#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    Rectangle rect;

    // Input length and width from user
    float length;
    float width;
     cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Set length and width using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and output area
    cout << "Area of rectangle: " << rect.calculateArea() << endl;

    return 0;
}
