#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    char choice;

    // Main program loop
    while (true) {
        // Prompt the user to select a shape
        cout << "Please select the area of the shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

if (choice == '1'){
     double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                
cout << "Area of the square: " << calculateSquareArea(side) << endl;
                
                
}
else if (choice == '2'){
    double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
}
else if (choice == '3'){
    double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
}
else if (choice == '4'){
    break;
}
else{
    cout << "Your input is: " << choice << " which is an invalid input \n Please enter valid input!!!" << endl;
}
       
        }

    cout << "Program terminated." << endl;

    return 0;
}
