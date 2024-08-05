#include <iostream>

void printInfo(const std::string name, const int age){
    /*name = " ";
    age = 0; (gives error) */
    std::cout << name << '\n';
    std::cout << age << '\n';
}

int main(){

    std::string name = "Kaycee";
    int age = 16;

    printInfo(name, age);

    return 0;
}