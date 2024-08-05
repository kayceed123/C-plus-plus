#include <iostream>

int main(){

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F', 'U'};

    for(char grade : grades){
        std::cout << grade << '\n';
    }

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int number : numbers){
        std::cout << number << '\n';
    }

    return 0;
}