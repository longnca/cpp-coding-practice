/*
Simple Calculator: Write a program that takes two integers 
and a character ('+', '-', '*', '/') as input 
and uses an if statement to output the result of the operation.
*/

#include <iostream>

using namespace std;

int main() {
    // declare 2 float variables and a char to hold the operation 
    float num1, num2;
    char operation;

    // prompt user input 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, - , *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;


    // conditional operations
    if (operation == '+') {
        cout << "Result = " << (num1 + num2); 
    } else if (operation == '-') {
        cout << "Result = " << (num1 - num2);
    } else if (operation == '*') {
        cout << "Result = " << (num1 * num2);
    } else if (operation == '/') {
        if (num2 != 0) { 
            cout << "Result = " << static_cast<float>(num1) / num2;
        } else { // error handling 
            cout << "Error: Division by zero." << endl;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
    }

    return 0;
}