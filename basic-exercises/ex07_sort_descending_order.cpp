/*
Write a C++ program that reads seven numbers and sorts them in descending order.
*/

#include <iostream>
#include <algorithm> // for Sort function

using namespace std;

int main() {
    const int size = 7; // number of elements
    int numbers[size]; // initialize the array of size of 7

    // reading 7 numbers from the users
    cout << "Enter seven numbers, separate the spaces: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    // sort the array in descending order using the sort function
    sort(numbers, numbers + size, greater<int>());

    // print the sorted numbers
    cout << "Numbers in descending order: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}