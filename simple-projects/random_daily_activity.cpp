#include <iostream>
#include <ctime>  // for time()

int main() {
    
    std::cout << "********** DAILY ACTIVITY SUGGESTION **********\n\n";

    // use the current time as a seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(0))); 

    // variable to store random numbers in the range 1 to 5
    int randomNumber = std::rand() % 5 + 1;

    // output the activity suggestion based on the random number
    switch(randomNumber) {
        case 1:
            std::cout << "Go for a 30-minute walk!\n";
            break;
        case 2:
            std::cout << "Read a book for an hour!\n";
            break;
        case 3:
            std::cout << "Try a new recipe for dinner!\n";
            break;
        case 4:
            std::cout << "Spend time with family or friends!\n";
            break;
        case 5:
            std::cout << "Do a workout session!\n";
            break;
        default: std::cout << "Error: Invalid random number!\n";
            break;
    }

    std::cout << "\nThank you for using the daily activity suggestion.\n";
    std::cout << "**********************************";

    return 0;
}