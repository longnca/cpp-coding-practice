/*
Leap Year Checker: 
Write a program that uses if statements to determine whether a year is a leap year.
*/

/*
Solution:
A leap year is typically defined by the following rules:

A year is a leap year if it is divisible by 4.
However, if the year can also be evenly divided by 100, it is not a leap year, unless...
The year is also evenly divisible by 400. Then it is a leap year.
*/

#include <iostream>

using namespace std;

int main() {
    // declare variable
    int year; 

    // take user input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // initialize the boolean variable
    bool isLeapYear = false;

    // conditional statements
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true; // divisible by 400 so a leap year
            } 
            else {
                isLeapYear = false; // divisible by 100 but not by 400, so not a leap year
            }
        }
        else {
            isLeapYear = false; // divisible by 4 but not by 100, so not a leap year
        }
    } 
    else {
        isLeapYear = false; // not divisible by 4, so not a leap year
    }

    // print the output result
    if (isLeapYear) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    
    return 0;
}