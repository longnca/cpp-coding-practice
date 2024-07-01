/*
w3resource.com
Write a program in C++ to find the factorial of a number.

Sample output: 
Input a number to find the factorial: 5                               
The factorial of the given number is: 120 
*/

/*
Note: The factorial of a non-negative integer n is the product of all positive integers less than or equal to n, denoted as n!.
*/

#include <iostream>

int main() {
    // declare variables and initialize them
    unsigned long long number; // use unsigned long long to handle large numbers
    unsigned long long factorial = 1; // initialize factorial to 1 because the factorial of 0 is 1

    // take user input
    std::cout << "Input a number to find the factorial: ";
    std::cin >> number;

    // use the for-loop to calculate the factorial
    for (unsigned long long i = 1; i <= number; i++) {
        factorial *= i; // calculate factorial by multiplying factorial with i continuously up to the input number
    }

    // print the result
    std::cout << "The factorial of the given number is: ";
    std::cout << factorial << std::endl;

    return 0;
}