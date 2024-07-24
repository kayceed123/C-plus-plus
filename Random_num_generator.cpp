#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    int total = num1 + num2 + num3;
    std::cout << "Total: " << total << '\n';

    return 0;
}