#include <iostream>

int main(){

    std::string name = "Kaycee";
    int age = 16;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}