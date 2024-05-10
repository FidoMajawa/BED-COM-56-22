#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

// Function to reverse a string
string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word in a string
std::string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalizeNext = false;
    for (char& c : result) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("COM221.txt"); // Assuming the text file is named "COM221.txt"
    string fileData;

    if (inputFile.is_open()) {
        // Read the contents of the file into a string
        getline(inputFile, fileData);

        // Close the file
        inputFile.close();

        // Calculate and output the number of vowels
        int vowelCount = countVowels(fileData);
        cout << "Number of vowels: " << vowelCount << endl;

        // Calculate and output the number of words
        int wordCount = countWords(fileData);
        cout << "Number of words: " << wordCount << endl;

        // Output the reverse of the string
        cout << "Reversed string: " << reverse(fileData) << endl;

        // Capitalize the second letter of each word and output the result
        cout << "String with second letter capitalized: " << capitalizeSecondLetter(fileData) << endl;
    } else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}
