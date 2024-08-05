#include <iostream> 

//pass by value
void swap(std::string x, std::string y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

//pass by reference
void refswap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

int main(){

    std::string x = "Coca-Cola";
    std::string y = "Pepsi";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    //pass by value
    std::string a = "Fanta";
    std::string b = "Tango";
    swap(a, b);

    std::cout << "A: " << a << '\n';
    std::cout << "B: " << b << '\n';

    //pass by reference
    refswap(a, b);

    std::cout << "A: " << a << '\n';
    std::cout << "B: " << b << '\n';

    return 0;
}