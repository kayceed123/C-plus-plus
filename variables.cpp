#include <iostream>

int main () {

    //integer = whole number
    int x; //declaration
    x = 5; //assignment
    int y = 10;
    int sum = x + y;

    int age = 16;
    int year = 2024;
    int days = 7;

    //double = decimal number
    double price = 10.99;
    double percent = 8.2;
    double temperature = 25.1;

    //char = single character type
    char grade = 'B';
    char initial = 'K';
    char currency = '$';

    //boolean = true or false, only 2 states
    bool student = true;
    bool power = false;
    bool sale = false;

    //string = sequence of text
    std::string name = "Kaycee";
    std::string language = "c++";
    std::string education = "college";

    std::cout << "integers:" << std:: endl;
    std::cout << age << std::endl;
    std::cout << year << std::endl;
    std::cout << days << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "using integers for maths:" << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << "The sum of these numbers is " << sum << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "displaying double variables:" << std::endl;
    std::cout << price << std::endl;
    std::cout << percent << std::endl;
    std::cout << temperature << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "displaying characters" << std::endl;
    std::cout << grade << std::endl;
    std::cout << initial << std::endl;
    std::cout << currency << std::endl;
    std::cout << "The price is " << currency << price << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "displaying boolean variables:" << std::endl;
    std::cout << student << std::endl;
    std::cout << power << std::endl;
    std::cout << sale << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "displaying strings:" << std::endl;
    std::cout << name << std::endl;
    std::cout << language << std::endl;
    std::cout << education << std::endl;
    std::cout << ' ' << std::endl;

    std::cout << "My name is " << name << ", i go to " << education << " and i am learning " << language << std::endl;
    std::cout << "I am " << age << " years old and my first initial is " << initial << std::endl;

    return 0;
}