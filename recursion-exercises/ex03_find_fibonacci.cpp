/*
Write a C++ program to implement a recursive function to get the nth Fibonacci number.
*/

#include <iostream>
using namespace std;

// Recursive function to get the nth Fibonacci number
int fib(int n) {
    // Base case
    if (n == 0) return 0;
    if (n == 1) return 1; 

    // Recursive case
    return fib(n-1) + fib(n-2);
}

// Main function
int main() {
    // declare a variable to hold the user input
    int number;
    cout << "Enter a number: "; 
    cin >> number;

    // call the function
    int result = fib(number);

    // print the output
    cout << "Fibonacci number " << number << " is: " << result << endl;
}