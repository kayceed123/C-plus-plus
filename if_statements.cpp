#include <iostream>

int main()
{

    int age;
    std::cout << "Enter your age" << '\n';
    std::cin >> age;

    if(age > 122){
        std::cout << "you are dead" << '\n';
    }
    else if(age >= 18){
        //note: comparrison symbols are same as in python. E.g. < is less than
        std::cout << "Allowed" << '\n';
    }
    else if(age < 0){
        std::cout << "You are not real" << '\n';
    }
    else{
        std::cout << "Not allowed" << '\n';
    }

    return 0;
}