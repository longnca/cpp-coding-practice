#include <iostream>
#include <ctime>        // for time()

int main() {
    
    std::cout << "********** NAME OF THE C++ PROGRAM **********\n\n";

    // use the current time as a seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(0)));

    // new variable to store random numbers in the range 1 to 5
    int randomNumber = rand() % 5 + 1;

    // output the prize based on the random number
    switch(randomNumber) {
        case 1: std::cout << "You win a bumper sticker!\n";
            break;
        case 2: std::cout << "You win a t-shirt!\n";
            break;
        case 3: std::cout << "You win a free lunch!\n";
            break;
        case 4: std::cout << "You win a gift card!\n";
            break;
        case 5: std::cout << "You win concert tickets!\n";
            break;
        default: std::cout << "Error: Invalid random number!\n";
            break;
    }

    std::cout << "\nThank you for using my program.\n";
    std::cout << "**********************************";

    return 0;
}