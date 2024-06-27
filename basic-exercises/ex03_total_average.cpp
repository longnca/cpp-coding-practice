/*
Write a C++ program to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25
*/

#include <iostream>

using namespace std;

int main() {
    // declare float variables
    float a, b, c, d, total, avg; 

    cout << "Compute the total and average of four numbers :" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "Input 1st two numbers (separated by space) :";
    cin >> a >> b;

    cout << "Input last two numbers (separated by space) :";
    cin >> c >> d;

    total = a + b + c +d;
    avg = total / 4; 
    
    cout << "The total of four numbers is :";
    cout << total << endl;

    cout << "The average of four numbers is :";
    cout << avg << endl;

}