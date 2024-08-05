#include <iostream>

int main(){

    std::string names[5];
    int size = sizeof(names)/sizeof(names[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a name or 'q' to quit #" << i + 1 << ": \n";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            names[i] = temp;
        }
    }

    std::cout << "Your array: \n";

    for(std::string name : names){
        std::cout << name << ' ';
    }

    return 0;
}