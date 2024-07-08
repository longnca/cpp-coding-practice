/*
Write a C++ program to capitalize the first letter of each word in a given string. 
Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises
*/

#include <iostream>
#include <string>
#include <cctype> // for toupper and isalpha

using namespace std;

// Function to capitalize the first letters of each word in a text
string capitalizeLetters(string text) {
    // loop through each character in the string
    for (int i = 0; i <= text.length(); i++) {
        // if it's the first character of the text OR the characters after a space, then capitalize it
        if (i == 0 || text[i - 1] == ' ') {
            // Only capitalize alphabetic characters
            if (isalpha(text[i])) {
                text[i] = toupper(text[i]);
            }
        }
    }
    return text;
}

int main() {
    cout << "Capitalize this text: 'lorem ipsum 34dolor sit amet'." << endl;
    cout << capitalizeLetters("lorem ipsum 34dolor sit amet");
}