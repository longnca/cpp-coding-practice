#include <iostream>

int main() {

    double tempF, tempC;
    int userInput;

    std::cout << "********** TEMPERATURE CONVERSION **********\n";
    std::cout << "";
    std::cout << "What conversion type would you like to use: \n";
    std::cout << "1 - Fahrenheit to Celsius.\n";
    std::cout << "2 - Celsius to Fahrenheit.\n";
    std::cout << "Please enter: ";
    std::cin >> userInput;

    if (userInput == 1) {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> tempF;

        tempC = (tempF - 32) * 5 / 9;

        std::cout << tempF << " degree Fahrenheit is equal to " << tempC << " degree Celcius.";
    } else if (userInput == 2) {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> tempF;

        tempC = (1.8 * tempF) + 32;

        std::cout << tempF << " degree Celsius is equal to " << tempC << " degree Fahrenheit.";
    } else {
        std::cout << "Invalid input.";
    }


    std::cout << "\nThank you for using my temperature conversion app.\n";
    std::cout << "**********************************";

    return 0;
}