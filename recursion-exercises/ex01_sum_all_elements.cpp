/*
Write a C++ program to find the sum of all elements in an array using recursion.
*/

#include <iostream>
using namespace std;

// Recursive function to sum all elements
int sumElements(int n) {
    // Base case: when n is 0 or 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case
    return n * factorial(n - 1);
}

// Main function
int main() {
    // take user input
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // call the function
    int result = factorial(number);

    // print the output
    cout << "Factorial of " << number << " is: " << result << endl;
}