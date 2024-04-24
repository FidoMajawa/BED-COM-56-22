#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element of the array
    cout << "Elements starting with 'B':" << endl;
    for (const string& element : elements) {
        // Check if the element starts with 'B'
        if (element[0] == 'B') {
            // Output the element
            cout << element << endl;
        }
    }

    return 0;
}
