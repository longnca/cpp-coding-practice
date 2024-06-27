/*
Write a C++ program that swaps two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/

#include <iostream>

using namespace std;

int main() {
    // declare integer variables
    int a, b, temp;

    cout << "Input the first number: ";
    cin >> a;

    cout << "Input the second number: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping, the first number is: " << a << endl;
    cout << "After swapping, the second number is: " << b << endl;
}