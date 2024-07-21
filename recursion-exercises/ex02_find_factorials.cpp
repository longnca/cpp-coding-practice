/*
Write a C++ program to calculate the factorial of a given number using recursion.
*/

#include <iostream>
using namespace std;

// Recursive function to calculate the factorial
int factorial(int n) {
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