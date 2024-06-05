#include <iostream>
using namespace std;
int main() {
    int inputValue;

    // Prompt the user for an integer value between 5 and 10
    std::cout << "Please enter an integer value between 5 and 10: ";

    // Keep prompting until a valid input is received
    while (true) {
        // Check if the input is a valid integer
        if (!(cin >> inputValue)) {
            // Clear the input stream
            cin.clear();
            // Ignore any remaining characters in the input stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Prompt the user again
            cout << "Sorry, you enterd an invalid number. please try again ";
        } 

        else if (inputValue < 5 || inputValue > 10) {
            // Prompt the user again if the input is not between 5 and 10
            cout << "You entered " << inputValue <<  ". Please enter a number between 5 and 10. ";
        }
        
        else {
            // Input value is valid, exit the loop
            break;
        }
    }

    // Output a message to inform the user that their input value has been accepted
    cout << "Your input value(" << inputValue << ") has been accepted." << endl;

    return 0;
}
