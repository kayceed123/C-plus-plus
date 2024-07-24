#include <iostream>

void hello(std::string name, int age){
    std::cout << "Hello " << name << ". You are " << age << " Years old" << '\n';
}

double square(double length){
    double result = length * length;
    return result;
}

double cube (double cubelength){
    double result = cubelength * cubelength * cubelength;
    return result;
}

int main()
{

    std::string name = "Kaycee";
    int age = 16;

    hello(name, age);
    hello(name, age);

    double length;
    std::cout << "Enter the length of the square: \n";
    std::cin >> length;
    double area = square(length);

    double cubelength;
    std::cout << "Enter the length of the cube: \n";
    std::cin >> cubelength;
    double volume = cube(cubelength);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}