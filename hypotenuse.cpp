#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A: " << '\n';
    std::cin >> a;
    std::cout << "Enter side B: " << '\n';
    std::cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side c is: " << c;

    return 0;
}