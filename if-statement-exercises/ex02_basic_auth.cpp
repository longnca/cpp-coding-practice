/*
Basic Authentication: Simulate a login system where the user inputs a username and password. 
Use if statements to check if the entered credentials match stored values.
*/

#include <iostream>
#include <string> // include for string operation 

using namespace std;

int main() {
    // declare stored credentials 
    const string storedUserName = "user1";
    const string storedPassword = "password123";

    // declare the user input variables 
    string username, password;

    // get user input
    cout << "Enter the username: ";
    cin >> username;
    cout << "Enter the password: ";
    cin >> password; 

    // use the if statements to check if the username and password are matching the stored credentials
    if (username == storedUserName && password == storedPassword) {
        cout << "The username and password are correct.";
    } else {
        cout << "Incorrect username or password." << endl;
    }

    return 0;
}
