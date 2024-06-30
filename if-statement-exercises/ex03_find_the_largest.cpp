/*
Find the Largest: Write a program that takes three integers 
and uses nested if statements to find and print the largest.
*/

#include <iostream>

using namespace std;

int main() {
    // declare three int variables and the largest number variable
    int a, b, c;
    int largest;

    // take user input
    cout << "Input the three integer numbers (separated by spaces): ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}