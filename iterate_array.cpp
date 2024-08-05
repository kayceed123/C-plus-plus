#include <iostream>

int main(){

    std::string names[] = {"Willow", "Kaycee", "Olivia", "Ben", "Jaxon", "Darcie"};
    
    for(int i = 0; i < sizeof(names)/sizeof(std::string); i++ ){
        std::cout << names[i] << '\n';
    }

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F', 'U'};

    for(int x = 0; x < sizeof(grades)/sizeof(char); x++ ){
        std::cout << grades[x] << '\n';
    }

    return 0;
}