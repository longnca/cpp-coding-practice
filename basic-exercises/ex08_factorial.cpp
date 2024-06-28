/*
For n = 10, write a C++ program that reads the integer n and prints its factorial.
*/

#include <iostream>

using namespace std;

int main() {
    int n; 
    unsigned long long factorial = 1; // use unsigned long long to handle large factorials

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }
}