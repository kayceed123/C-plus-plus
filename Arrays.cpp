#include <iostream> 

int main(){

    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::cout << cars[0] << '\n';
    std::cout << cars[2] << '\n';

    cars[1] = "Camaro";
    std::cout << cars [1] << '\n';

    std::string names[3];
    names[0] = "Willow";
    names[1] = "Kaycee";
    names[2] = "Olivia";

    std::cout << names[0] << '\n';
    std::cout << names[1] << '\n';
    std::cout << names[2] << '\n';

    int numbers[] {1, 2, 3, 4, 6};
    std::cout << numbers[0] << '\n';
    std::cout << numbers[1] << '\n';
    std::cout << numbers[2] << '\n';
    std::cout << numbers[3] << '\n';
    std::cout << numbers[4] << '\n';

    numbers[4] = 5;
    std::cout << numbers[4] << '\n';


    return 0;
}