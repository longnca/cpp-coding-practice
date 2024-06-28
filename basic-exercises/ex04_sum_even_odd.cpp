/*
Write a C++ program to calculate the sum of all even and odd numbers in an array.
Sample Output:
Original array: 1 2 3 4 5 6 7 8
Sum of all even and odd numbers: 20,16
*/

#include <iostream>

using namespace std;

// function to separate even and odd numbers in the array and return their sum
int* test(int arr[], int s1) {
    // static array to store the sum of even and odd numbers
    static int result[2] = {0, 0}; // initialize the array to ensure the sums start at 0

    // loop throught the array elements 
    for(int i = 0; i <= s1; i++) {
        // check if the number is even or odd, and then update the sums accordingly
        arr[i] % 2 == 0 ? result[0] += arr[i] : result[1] += arr[i];
    }
    return result;
}

int main() {
    // initialize the array 
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // pointer to hold the result array
    int *eo;
    // calculate the size of the array
    int s1 = sizeof(array1) / sizeof(array1[0]);

    // print the original array elements 
    cout << "Original array: ";
    for (int i; i <= s1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    // call the function to calculate the sums of even and odd numbers
    eo = test(array1, s1);

    // print the sum of odd and even numbers 
    cout << "Sum of all even and odd numbers: " << *(eo + 0) << "," << *(eo + 1);

    // indicate successful execution of the program
    return 0;
}