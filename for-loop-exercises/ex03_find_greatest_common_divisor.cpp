/*
Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
*/

/*
Method: Use the Euclidean algorithm.
The Euclidean algorithm iteratively reduces the problem of finding the GCD 
of two numbers to finding the GCD of smaller pairs of numbers until it reaches 
a case where one of the numbers is zero. The GCD is the last non-zero remainder.
*/

#include <iostream>

int gcd(int x, int y);
/*
REQUIRES: integer numbers x and y.
PROMISES: return the greatest common divisor of two integer numbers.
*/

int main() {
    // declare variables
    int a, b;

    // take user input 
    std::cout << "Enter two integers to find their GCD: ";
    std::cin >> a >> b;

    // call the function
    int result = gcd(a, b);
    std::cout << "The GCD of " << a << " and " << b << " is " << result << std::endl;

    return 0;
}

/// @brief 
/// @param x the first integer
/// @param y the second integer
/// @return the Greatest Common Divisor (GCD) of x and y
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}