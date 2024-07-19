#include <iostream>

int main(){

    int number;

    do{
        std::cout << "Enter a positive number: \n";
        std::cin >> number;
    } while(number < 0);

    std::cout << "The # is " << number << '\n';

    return 0;
}