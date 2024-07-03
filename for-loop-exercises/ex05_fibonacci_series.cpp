/*
Write a program in C++ to display the first n terms of the Fibonacci series.

Sample output:
Enter the number of terms of the Fibonacci series to display: 10
Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

/*
Note:
The Fibonacci series is a sequence where each number is the sum of the two preceding ones, usually starting with 0 and 1.
*/

#include <iostream>

int main() {
    // declare variable
    int n;

    // take user input 
    std::cout << "Enter the number of terms of the Fibonacci series to display: ";
    std::cin >> n;

    // generate a Fibonacci series using a for loop
    if (n <= 0) {
        std::cout << "Please enter a positive integer.";
    } else {
        long long first = 0, second = 1, next_term;
        std::cout << "Fibonacci series: ";

        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                std::cout << first << ", "; // output the first term, special case
                continue;
            }
            if (i == 2) {
                std::cout << second << ", "; // output the second term, special case
                continue;
            }
            next_term = first + second; // calculate the next term in the serires
            first = second; // move the second term to the first place
            second = next_term; // the new term becomes the second term

            std::cout << next_term; // output the current term 
            if (i != n) std::cout << ", "; // add comma after each term except for the last term (n)
        }
        std::cout << std::endl;
    }
    
    return 0;
}