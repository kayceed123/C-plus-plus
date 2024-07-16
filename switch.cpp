#include <iostream>

int main()
{

    int month;
    std::cout << "Enter your birth month (1-12): " << '\n';
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "You were born in January" << '\n';
            break;
        case 2:
            std::cout << "You were born in February" << '\n';
            break;
        case 3:
            std::cout << "You were born in March" << '\n';
            break;
        case 4:
            std::cout << "You were born in April" << '\n';
            break;
        case 5:
            std::cout << "You were born in May" << '\n';
            break;
        case 6:
            std::cout << "You were born in June" << '\n';
            break;
        case 7:
            std::cout << "You were born in July" << '\n';
            break;
        case 8:
            std::cout << "You were born in August" << '\n';
            break;
        case 9:
            std::cout << "You were born in September" << '\n';
            break;
        case 10:
            std::cout << "You were born in October" << '\n';
            break;
        case 11:
            std::cout << "You were born in November" << '\n';
            break;
        case 12:
            std::cout << "You were born in December" << '\n';
            break;
        default:
            std::cout << "Only enter numbers between 1-12" << '\n';
            break;
    }

    int console;
    std::cout << "What's your favourite console out of xbox (1), playstation (2) or switch (3)?" << '\n';
    std::cin >> console;

    switch(console){
        case 1:
            std::cout << "You chose xbox" << '\n';
            break;
        case 2:
            std::cout << "You chose playstation" << '\n';
            break;
        case 3:
            std::cout << "You chose the nintendo switch" << '\n';
            break;
        default:
            std::cout << "That's not an option" << '\n';
            break;
    }

    return 0;
}