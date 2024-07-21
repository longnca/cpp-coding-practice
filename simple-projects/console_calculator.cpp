#include <iostream>

int main() {
    
    char operatorSign;
    double num1, num2, result;

    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter any operator sign (+ - * /): ";
    std::cin >> operatorSign;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch(operatorSign) {
        case '+':
            result = num1 + num2;
            std::cout << "Result is: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result is: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result is: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result is: " << result << "\n";
            break;
        default:
            std::cout << "That was not a valid operator.";
    }

    std::cout << "Thank you for using my calculator app.\n";
    std::cout << "**********************************";

    return 0;
}