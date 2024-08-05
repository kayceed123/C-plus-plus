#include <iostream>

int main(){

    const int size = 9;

    std::string foods[size];

    fill(foods, foods + (size/3), "Pizza");
    fill(foods + (size/3), foods + (size/3) * 2, "Cheeseburger");
    fill(foods + (size/3) * 2, foods + size, "Nachos");
    
    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}