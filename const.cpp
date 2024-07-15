#include <iostream>

int main() {
    /* the const keyword specifies that a variable's value is a constant
    tells the complier to prevent anything from modifying it
    read only */

    //common naming comvention is to make constant variables all uppercase
    const double PI = 3.14159;
    //changing the pi variable can lead to a problem in the program so you can change it to a constant to avoid this
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << std::endl;

    const int LIGHT_SPEED = 299.792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const std::string name = "Kaycee";

    std::cout << name << std::endl;

    return 0;
}