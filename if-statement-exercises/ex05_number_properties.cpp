/*
Number Properties: 
Use if and else to check and print whether a number is positive, negative, or zero.
*/

#include <iostream>

using namespace std;

int main() {
    // declare variable
    int input;

    // take user input
    cout << "Enter a number: ";
    cin >> input;

    // check whether a number is positive, negative, or zero
    if (input > 0) {
        cout << input << " is a positive number.";
    } else if (input < 0) {
        cout << input << " is a negative number.";
    } else {
        cout << input << " is zero.";
    }

    return 0;
}