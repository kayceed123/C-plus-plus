#include <iostream>

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

int getMultiply(int multiplications[], int multiplysize){
    double total = 1;

    for(int i = 0; i < multiplysize; i++){
        total = total * multiplications[i];
    }

    return total;
}

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "£" << total << '\n';

    int multiplications[] = {2, 3, 4};
    int multiplysize = sizeof(multiplications)/sizeof(multiplications[0]);
    double multiplytotal = getMultiply(multiplications, multiplysize);

    std::cout << multiplytotal << '\n';

    return 0;
}