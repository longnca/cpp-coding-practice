/*
Write a C++ program to reverse a given string.

Example:
Sample Input: w3resource
Sample Output: ecruoser3w

*/

#include <iostream>
#include <string>

using namespace std;

// Function to reverse the string
string reverseString(string str) {
    // declare an empty string to hold the reversed string
    std::string reversed;

    // reverse the string by using a for loop to iterate 
    // from the last element of the string towards the beginning element
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    return reversed;
}


int main() {
    // declare the string variable to hold the user input
    string input;

    // take user input
    cout << "Enter a string (e.g. apple): ";
    cin >> input;

    // print the output
    cout << "Output: " << reverseString(input) << endl;
}