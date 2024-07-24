#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: 
            std::cout << "You win a pat on the back :) \n";
            break;
        case 2:
            std::cout << "You win a sticker \n";
            break;
        case 3:
            std::cout << "You win a colouring book \n";
            break;
        case 4:
            std::cout << "You win a lifetime supply of muffins \n";
            break;
        case 5:
            std::cout << "You win a helicopter!";
            break;
    }

    return 0;
}