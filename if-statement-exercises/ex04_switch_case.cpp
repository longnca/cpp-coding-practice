/*
Switch Case Menu: 
Implement a menu using a switch case that allows the user 
to select from different options 
(e.g., '1' for adding a new record, '2' for deleting a record).
*/

#include <iostream>

using namespace std;

int main() {
    // declare variable
    int choice;

    cout << "Menu:\n";
    cout << "1. Add a new record\n";
    cout << "2. Delete a record\n";
    cout << "3. View all records\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;


    // switch case
    switch (choice) {
    case 1:
        std::cout << "Adding a new record...\n";
        // Code to add a record would go here
        break;
    case 2:
        std::cout << "Deleting a record...\n";
        // Code to delete a record would go here
        break;
    case 3:
        std::cout << "Viewing all records...\n";
        // Code to view records would go here
        break;
    case 4:
        std::cout << "Exiting...\n";
        exit(0); // Safely exit the program
    default:
        std::cout << "Invalid choice, please enter 1-4.\n";
        break;
    }
}