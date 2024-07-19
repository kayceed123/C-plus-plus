#include <iostream>

int main(){

    for (int i = 10; i >= 0; i--){
        std::cout << i << '\n';
    }

    std::cout << "BOO \n";
    std::cout << "The first 10 digits of the 3 times table is: \n";

    for (int x = 0; x <= 30; x += 3){
        std::cout << x << '\n';
    }

    //break and continue

    for (int y = 1; y <= 20; y++){
        if (y == 13){
            break;
        }
        std::cout << y << '\n';
    }

    for (int z = 1; z <= 20; z++){
        if (z == 13){
            continue;
        }
        std::cout << z << '\n';
    }

    return 0;
}