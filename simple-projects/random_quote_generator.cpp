#include <iostream>
#include <ctime> // for time()

int main() {
    
    std::cout << "********** MOTIVATIONAL QUOTE GENERATOR **********\n\n";

    // use the current time as a seed for random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // variable to store a random number in the range 1 to 5
    int randomNumber = std::rand() % 5 + 1;

    // output the motivational quote based on the random number
    switch(randomNumber) {
        case 1:
            std::cout << "Believe you can and you're halfway there. - Theodore Roosevelt\n";
            break;
        case 2:
            std::cout << "The only way to do great work is to love what you do. - Steve Jobs\n";
            break;
        case 3:
            std::cout << "Success is not how high you have climbed, but how you make a positive difference to the world. - Roy T. Bennett\n";
            break;
        case 4:
            std::cout << "Your time is limited, don't waste it living someone else's life. - Steve Jobs\n";
            break;
        case 5:
            std::cout << "The best time to plant a tree was 20 years ago. The second best time is now. - Chinese Proverb\n";
            break;
        default:
            std::cout << "Error: Invalid random number!\n";
            break;
    }

    std::cout << "\nThank you for using my PROGRAM.\n";
    std::cout << "**********************************";

    return 0;
}