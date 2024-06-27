/*
Write a C++ program that displays mixed data types and arithmetic operations.
Sample output:
Display arithmetic operations with mixed data type :
---------------------------------------------------------
5 + 7 = 12
3.7 + 8.0 = 11.7
5 + 8.0 = 13.0
5 - 7 = -2
3.7 - 8.0 = -4.3
5 - 8.0 = -3.0
5 * 7 = 35
3.7 * 8.0 = 29.6
5 * 8.0 = 40.0
5 / 7 = 0
3.7 / 8.0 = 0.5
5 / 8.0 = 0.6
*/

#include <iostream>

using namespace std;

int main() {
    // declare the variables 
    int a = 5, b = 7;
    double c = 3.7, d = 8.0;

    cout << "Display arithmetic operations with mixed data type :" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << c << " + " << d << " = " << c + d << endl;

}