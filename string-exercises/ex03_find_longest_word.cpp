/*
Write a C++ program to find the largest (longest) word in a given string.
Example:
Sample Input: C++ is a general purpose  programming language.
Sample Output: programming
*/

#include <iostream>
#include <string>
#include <sstream> // for stringstream to read input text in separate words

using namespace std;

// Function to find the longest word in a given string
string findLongestWord(string text) {
    // declare variables to hold the longest word and the current word
    string longestWord;
    string currentWord;

    // create a string stream from the input
    istringstream stream(text);

    // loop through all the words in the text
    while (stream >> currentWord) {
        if (currentWord.length() > longestWord.length()) {
            longestWord = currentWord;
        }
    }

    return longestWord;
}

int main() {
    string input;

    cout << "Enter a string text (e.g. 'C++ is a general purpose  programming language'): " << endl;
    getline(cin, input);

    // call the function
    string largestWord = findLongestWord(input);

    cout << "The longest word in the text is: " << largestWord << endl;
}