#include <iostream>
#include <cmath>

int main()
{

    double x = 3;
    double y = 4;
    double z;
    double a;
    double b;
    double c;
    double d;
    double e = 3.14;
    double f;
    double g;
    double h;

    //biggest num
    z = std::max(x, y);
    //smallest num
    a = std::min(x, y);
    //to the power of
    b = pow(2,3);
    //square root
    c = sqrt(9);
    //absolute value
    d = abs(-3);
    //round
    f = round(e);
    //roundup
    g = ceil(e);
    //round down
    h = floor(e);

    std::cout << z << '\n' << a << '\n' << b << '\n' << c << '\n' << d << '\n';
    std::cout << f << '\n' << g << '\n' << h;

    return 0;
}