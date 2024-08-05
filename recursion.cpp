#include <iostream>

//iterative
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step\n";
    }
}

int itfactorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

//recursive
void run(int steps){
    if(steps > 0){
        std::cout << "You take a big step\n";
        run(steps-1);
    }
}

int recfactorial(int num){
    if(num > 1){
        return num * recfactorial(num - 1);
    }
    else{
        return 1;
    }
}

int main(){

    walk(10);
    run(5);
    
    std::cout << itfactorial(10) << '\n';
    std::cout << recfactorial(10) << '\n';

    return 0;
}