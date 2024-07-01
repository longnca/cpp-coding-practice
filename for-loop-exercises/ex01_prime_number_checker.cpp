/*
w3resource.com
Write a program in C++ to check whether a number is prime or not.
*/

/*
Note: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
If a number n is not prime, it will have a divisor less than or equal to the square root of n.
*/

#include <iostream>
#include <cmath> // for the sqrt function 

int main() {
    // declare variable
    int number;

    // take user input
    std::cout << "Enter a number to check if it is a prime number or not: ";
    std::cin >> number;

    // check if prime number or not
    bool isPrime = true;
    if (number < 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= sqrt(number); i++) { // check divisibility of all numbers from 2 up to the square root of the number
            if (number % i == 0) {
                isPrime = false;
                break; // exit the loop if the divisor is found
            }
        }
    }

    // print the result
    if (isPrime) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}