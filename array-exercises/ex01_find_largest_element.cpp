/*
Write a C++ program to find the largest element of a given array of integers.
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to find the largest element
int findLargest(int nums[], int n) {
    // declare and initialize the largest variable as the first element in the array
    int largest = nums[0];
    // loop through the array, starting from the second element (i = 1)
    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main() {
    // declare an integer array
    int nums[] = {2, 9, 3, 6, 13, 24, 17};
    
    // get the number of elements in the array
    int n = sizeof(nums) / sizeof(nums[0]);

    // print the original array
    cout << "The original array is: ";
    for (int x = 0; x < n; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;

    // call the function
    int largest = findLargest(nums, n);
    cout << "The largest number in this array is: " << largest << endl;

}