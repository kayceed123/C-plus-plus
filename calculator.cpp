#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter + - * or /: \n";
    std::cin >> op;

    std::cout << "Enter num 1: \n";
    std::cin >> num1;

    std::cout << "Enter num 2: \n";
    std::cin >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        std::cout << num1 << op << num2 << " is equal to " << result << '\n';
        break;
        case '-':
        result = num1 - num2;
        std::cout << num1 << op << num2 << " is equal to " << result << '\n';
        break;
        case '*':
        result = num1 * num2;
        std::cout << num1 << op << num2 << " is equal to " << result << '\n';
        break;
        case '/':
        result = num1 / num2;
        std::cout << num1 << op << num2 << " is equal to " << result << '\n';
        break;
        default:
        std::cout << "Not a valid input \n";
    }

    std::cout << "********************************";

    return 0;
}