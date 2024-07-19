#include <iostream>

int main(){

    int rows;
    int columns;
    char symbols;

    std::cout << "How many rows?: \n";
    std::cin >> rows;

    std::cout << "How many columns?: \n";
    std::cin >> columns;

    std::cout << "Enter a symbol to use?: \n";
    std::cin >> symbols;

    for(int x = 1; x <= rows; x++){
        for(int y = 1; y <= columns; y++){
        std::cout << symbols;
        }
        std::cout << '\n';
    }

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
        std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}