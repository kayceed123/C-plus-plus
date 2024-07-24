#include <iostream>

int yourNum = 2; //global variable - polutes global namespace

void printNum(int yourNum){
    std::cout << yourNum;
}

int main(){

    int myNum = 1;
    std::cout << myNum << '\n'; //local variable

    printNum(yourNum);

    return 0;
}