#include <iostream>

//pointers = variable that stores memory address of another variable

int main(){

    std::string name = "Kaycee";
    std::string *pName = &name;

    std::cout << pName << " " << *pName << '\n';

    int age = 16;
    int *pAge = &age;

    std::cout << pAge << " " << *pAge << '\n';

    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    std::string *pFreePizzas = freePizzas;
    
    std::cout << *pFreePizzas << '\n';

    //null pointer = not pointing to anything

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;
    
    if(pointer == nullptr){
        std::cout << "address was not assigned";
    }
    else{
        std::cout << "address was assigned \n";
        std::cout << *pointer;
    }

    return 0;
}